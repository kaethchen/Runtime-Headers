@class CKCoalescer;

@interface _CKExpiringCacheEntry : NSObject

@property (getter=isExpired) BOOL expired;
@property (readonly, weak, nonatomic) id object;
@property BOOL supportsDeferral;
@property double expiration;
@property (readonly, nonatomic) CKCoalescer *coalescer;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObserving:(id)a0;
- (void)stopObserving:(id)a0;
- (void)defer;

@end
