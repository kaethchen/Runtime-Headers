@class NSDictionary, NSMutableDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (class, readonly) NSMutableDictionary *sharedRegexCache;

@property (readonly) NSDictionary *definition;
@property (readonly) BOOL allowsResponse;
@property (readonly) unsigned long long components;

+ (id)stringFromValue:(id)a0;
+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1 withCache:(id)a2;
+ (id)regexForPattern:(id)a0 fromCache:(id)a1;
+ (BOOL)shouldCacheRegularExpressions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesEvent:(id)a0;
- (id)initWithDefinition:(id)a0;
- (id)exportObject;
- (id)initWithCacheObject:(id)a0;

@end
