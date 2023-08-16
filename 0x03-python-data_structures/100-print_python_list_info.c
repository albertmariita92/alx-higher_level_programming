#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.

void print_python_list_info(PyObject *p) {
    PyListObject *list = (PyListObject *)p;
    printf("List size: %ld\n", PyList_Size(list));
    for (Py_ssize_t i = 0; i < PyList_Size(list); i++) {
        PyObject *item = PyList_GetItem(list, i);
        printf("  Item at index %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

int main(void) {
    return 0;
}
