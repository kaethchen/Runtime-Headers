@class NSPointerArray, NSMutableArray, BAFunctionSignature;

@interface BAFunctionInvocation : NSObject {
    BAFunctionSignature *_signature;
    NSPointerArray *_arg_types;
    NSPointerArray *_arg_values;
    NSMutableArray *_references;
    void *_rvalue;
    unsigned long long _rsize;
    void /* function */ *_function;
    long long _seen_arg_max;
}

+ (id)invocationWithSignature:(id)a0;

- (void)dealloc;
- (void)getReturnValue:(void *)a0;
- (void)invoke;
- (void)setArgument:(void *)a0 atIndex:(unsigned long long)a1;
- (void)setFunction:(id)a0;
- (id)initWithSignature:(id)a0;
- (void)_setArgumentWithDescriptor:(id)a0 atIndex:(unsigned long long)a1;
- (void)addReferenceParameter:(id)a0;
- (id)referenceParameters;
- (id)returnValueAsDescriptor;
- (void)setArgument:(void *)a0 atIndex:(unsigned long long)a1 withEncoding:(const char *)a2;
- (void)setArgumentWithDescriptor:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctionAddress:(void *)a0;
- (const char *)variadicArgumentTypeForDescriptor:(id)a0;

@end
