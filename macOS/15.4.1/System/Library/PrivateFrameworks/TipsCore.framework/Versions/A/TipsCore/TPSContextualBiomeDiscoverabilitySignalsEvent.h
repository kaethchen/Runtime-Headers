@interface TPSContextualBiomeDiscoverabilitySignalsEvent : TPSContextualBiomeEvent

- (id)publisherFromStartTime:(double)a0;
- (id)_filteringPredicate;
- (id /* block */)filterHandler;
- (id)filterParametersForBiomeQuery;

@end
