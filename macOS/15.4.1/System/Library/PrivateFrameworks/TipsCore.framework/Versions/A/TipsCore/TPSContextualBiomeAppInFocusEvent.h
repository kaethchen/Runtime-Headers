@interface TPSContextualBiomeAppInFocusEvent : TPSContextualBiomeEvent

+ (id)observationDateFromEvent:(id)a0;

- (id)publisherFromStartTime:(double)a0;
- (id)_filteringPredicate;
- (id /* block */)filterHandler;
- (id)filterParametersForBiomeQuery;

@end
