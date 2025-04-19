@interface ABActionAutovalidatorCacheSimpleEntry : ABActionAutovalidatorCacheEntry {
    SEL _selector;
}

- (id)description;
- (id)initWithSelector:(SEL)a0;
- (BOOL)validateMenuItem:(id)a0 withTarget:(id)a1;

@end
