@interface ABActionAutovalidatorCacheEntry : NSObject {
    BOOL _validation;
}

@property (readonly, nonatomic) unsigned long long hitCount;

- (id)description;
- (id)init;
- (id)initWithValidation:(BOOL)a0;
- (BOOL)validateMenuItem:(id)a0 withTarget:(id)a1;

@end
