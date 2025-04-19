@class NSArray, CNAutocompleteQueryCacheMissLogger;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject

@property (retain) CNAutocompleteQueryCacheMissLogger *logger;
@property (copy) NSArray *cachedResults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (void)didReturnCachedResults:(id)a0;
- (void)didReturnLiveResults:(id)a0;

@end
