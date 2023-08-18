#include <stdio.h>
#include <Python.h>

void print_python_list(PyObject *p)
{
    Py_ssize_t i = 0;
    Py_ssize_t size = PyList_Size(p);

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %li\n", size);
    printf("[*] Allocated = %li\n", ((PyListObject *)p)->allocated);
    for (i = 0; i < size; i++)
    {
        printf("Element %li: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
        if (PyBytes_Check(PyList_GetItem(p, i)))
        {
            printf("[.] bytes object info\n");
            printf("  size: %li\n", PyBytes_Size(PyList_GetItem(p, i)));
            printf("  trying string: %s\n", PyBytes_AsString(PyList_GetItem(p, i)));
            printf("  first 10 bytes: ");
            for (j = 0; j < 10; j++)
            {
                printf("%02hhx ", ((char *)PyBytes_AsString(PyList_GetItem(p, i)))[j]);
            }
            printf("\n");
        }
    }
}

void print_python_bytes(PyObject *p)
{
    Py_ssize_t size = 0;
    Py_ssize_t i = 0;

    printf("[.] bytes object info\n");
    if (PyBytes_Check(p))
    {
        size = PyBytes_Size(p);
        printf("  size: %li\n", size);
        printf("  trying string: %s\n", PyBytes_AsString(p));
        printf("  first 10 bytes: ");
        for (i = 0; i < 10 && i < size; i++)
        {
            printf("%02hhx ", ((char *)PyBytes_AsString(p))[i]);
        }
        printf("\n");
    }
    else
    {
        printf("  [ERROR] Invalid Bytes Object\n");
    }
}

