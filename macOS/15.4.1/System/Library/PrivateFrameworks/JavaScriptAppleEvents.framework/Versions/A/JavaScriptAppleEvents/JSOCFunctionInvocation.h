@class JSOCFunctionPointer;

@interface JSOCFunctionInvocation : NSObject {
    unsigned int _numberOfValues;
    void **_valuePointers;
}

@property (readonly, retain) JSOCFunctionPointer *functionPointer;

- (void)dealloc;
- (void)getReturnValue:(void *)a0;
- (void).cxx_destruct;
- (void)getArgument:(void *)a0 atIndex:(long long)a1;
- (void)invoke;
- (void)setArgument:(void *)a0 atIndex:(long long)a1;
- (id)initWithFunctionPointer:(id)a0;

@end
