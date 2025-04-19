@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (void)release;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;

@end
