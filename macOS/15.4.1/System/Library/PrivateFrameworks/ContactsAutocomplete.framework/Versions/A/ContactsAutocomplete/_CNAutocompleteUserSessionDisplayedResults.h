@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject

@property (readonly, nonatomic) CNAutocompleteFetchRequest *request;
@property (retain, nonatomic) NSMutableDictionary *datesByBatchIndexes;
@property (nonatomic) BOOL ignored;
@property (nonatomic) BOOL containsDuetResults;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)didReceiveBatch:(unsigned long long)a0;
- (BOOL)relevantForRequest:(id)a0;

@end
