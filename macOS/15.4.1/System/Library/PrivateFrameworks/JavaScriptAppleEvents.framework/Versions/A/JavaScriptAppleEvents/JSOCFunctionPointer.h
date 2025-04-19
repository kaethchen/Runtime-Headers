@interface JSOCFunctionPointer : JSOCPointer {
    struct { int abi; unsigned int nargs; struct _ffi_type **arg_types; struct _ffi_type *rtype; unsigned int bytes; unsigned int flags; unsigned int aarch64_nfixedargs; } _cif;
    unsigned int _numberOfArguments;
    struct _ffi_type { unsigned long long x0; unsigned short x1; unsigned short x2; struct _ffi_type **x3; } *_retType;
    struct _ffi_type **_argTypes;
}

- (void)dealloc;
- (void)callWithArguments:(void **)a0 returnValue:(void *)a1;
- (id)initWithPointerValue:(void *)a0 type:(id)a1;
- (id)initWithPointerValue:(void *)a0 type:(id)a1 additionalArguments:(unsigned int)a2;

@end
