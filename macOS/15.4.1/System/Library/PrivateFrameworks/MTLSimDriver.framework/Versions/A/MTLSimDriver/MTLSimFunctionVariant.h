@class MTLSimFunction;

@interface MTLSimFunctionVariant : MTLFunctionVariant {
    MTLSimFunction *_function;
}

@property (readonly) MTLSimFunction *function;

- (void)dealloc;
- (id)initWithFunction:(id)a0 compilerOutput:(id)a1;

@end
