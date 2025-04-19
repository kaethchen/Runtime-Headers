@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TUBatchFetchRequestProcessingResult : NSObject

@property (readonly, nonatomic) NSDictionary *handleToFetchRequest;
@property (readonly, nonatomic) NSMutableArray *handlesToBatchFetch;
@property (readonly, nonatomic) NSMutableArray *allHandlesFromFetchRequests;
@property (readonly, nonatomic) NSMutableDictionary *fetchRequestResults;

- (void).cxx_destruct;
- (id)initWithHandleToFetchRequest:(id)a0 handlesToBatchFetch:(id)a1 allHandlesFromFetchRequests:(id)a2 fetchRequestResults:(id)a3;

@end
