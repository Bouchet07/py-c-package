#include <Python.h>

// Define the actual function
int add(int a, int b) {
    return a + b;
}

static PyObject *py_add(PyObject *self, PyObject *args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return PyLong_FromLong(add(a, b));
}


static PyMethodDef methods[] = {
    {"add", py_add, METH_VARARGS, "Add two integers."},
    {NULL, NULL, 0, NULL}  // Sentinel
};


// Define the module structure
static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "mymodule",  // Module name
    NULL,        // Documentation
    -1,          // Size of per-interpreter state or -1
    methods      // Method table
};

// Module initialization function
PyMODINIT_FUNC PyInit_mymodule(void) {
    return PyModule_Create(&module);
}



