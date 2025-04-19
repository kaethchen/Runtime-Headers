@class NSDictionary;

@interface SHCacheValues : NSObject

@property (readonly) NSDictionary *cacheValues;
@property (readonly) long long lookupMaxAge;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0;

@end
