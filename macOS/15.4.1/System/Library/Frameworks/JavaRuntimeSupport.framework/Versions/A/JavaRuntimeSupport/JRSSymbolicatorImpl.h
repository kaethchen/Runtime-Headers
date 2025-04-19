@interface JRSSymbolicatorImpl : JRSSymbolicator

@property (nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;

- (void)dealloc;
- (unsigned long long)addressForSymbol:(id)a0;

@end
