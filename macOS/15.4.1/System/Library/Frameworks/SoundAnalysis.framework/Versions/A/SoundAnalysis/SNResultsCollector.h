@class NSArray;

@interface SNResultsCollector : NSObject <SNResultsObserving> {
    void /* unknown type, empty encoding */ results;
    void /* unknown type, empty encoding */ errors;
}

@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) NSArray *errors;
@property (nonatomic) void /* unknown type, empty encoding */ completeCount;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)clearErrors;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)clearResults;
- (void)clearCompleteCount;

@end
