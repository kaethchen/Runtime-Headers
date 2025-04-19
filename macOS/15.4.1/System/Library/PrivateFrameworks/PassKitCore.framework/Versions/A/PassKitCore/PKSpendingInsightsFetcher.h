@interface PKSpendingInsightsFetcher : NSObject {
    BOOL _foundInsightsDiscrepancy;
}

- (id)init;
- (BOOL)_validateTrends:(id)a0 againstSummary:(id)a1;
- (void)fetchInsightTrendsForSummary:(id)a0 completion:(id /* block */)a1;

@end
