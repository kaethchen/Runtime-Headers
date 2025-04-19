@interface HDWorkoutSeriesDataAggregator : HDSeriesQuantityDataAggregator

- (void)setConfiguration:(id)a0;
- (BOOL)shouldAggregateToSeriesForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5;

@end
