@class CNAutocompleteQueryResponsePreparer;

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer

@property (readonly) CNAutocompleteQueryResponsePreparer *preparer;

- (void).cxx_destruct;
- (id)initWithResponsePreparer:(id)a0 delegate:(id)a1;
- (id)prepareResults:(id)a0 forFetch:(id)a1;
- (void)setMatchingPriorityResultsPromise:(id)a0;
- (void)setPriorityResultsFuture:(id)a0;

@end
