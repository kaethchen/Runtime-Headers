@class NSString, StateCacheMeta;

@interface StateCacheEntry : NSObject

@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) StateCacheMeta *meta;
@property (nonatomic) long long action;

- (id)init;
- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (id)initWithState:(id)a0 meta:(id)a1;
- (id)initWithState:(id)a0 meta:(id)a1 action:(long long)a2;

@end
