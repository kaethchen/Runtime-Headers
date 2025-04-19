@class NSString, PreflightCache;

@interface PreflightCacheAssertion : NSObject

@property (copy, nonatomic) NSString *reason;
@property (readonly, weak, nonatomic) PreflightCache *cache;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)drop;
- (id)initWithReason:(id)a0 cache:(id)a1;

@end
