@class NSCache, NSURL, PPSRequestDispatcher;

@interface PPSSQLiteTimeIntervalSetIngester : NSObject <PPSDataIngesterProtocol>

@property (retain) NSCache *responseCache;
@property BOOL shouldUseCache;
@property (readonly) NSURL *filepath;
@property (retain) PPSRequestDispatcher *dispatcher;

+ (id)_filterIntervalSet:(id)a0 withTimeInterval:(id)a1;
+ (id)_stringForSourceName:(id)a0 metrics:(id)a1 predicate:(id)a2;

- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0;
- (id)_computeIntervalSetForRequest:(id)a0 outError:(id *)a1;
- (id)_computeIntervalSetMapForRequest:(id)a0 outError:(id *)a1;
- (id)filterIntervalSet:(id)a0 withTimeFilter:(id)a1;
- (id)filterIntervalSetMap:(id)a0 withTimeFilter:(id)a1;
- (id)parseDataForRequest:(id)a0 outError:(id *)a1;
- (void)removeResponseForKey:(id)a0;
- (id)responseForKey:(id)a0 withinTimeWindow:(id)a1;
- (void)setResponse:(id)a0 forKey:(id)a1 timeWindow:(id)a2;

@end
