@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)stopIterationWithVisitClusters:(id)a0;
- (unsigned long long)cumulativeLocationCountForDirection:(id)a0;
- (double)cumulativeLocationIntervalForDirection:(id)a0;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)a0;
- (double)cumulativeProcessingDuration;
- (unsigned long long)cumulativeVisitCountForDirection:(id)a0;
- (unsigned long long)lastLocationCount;
- (unsigned long long)lastLocationCountForDirection:(id)a0;
- (double)lastLocationIntervalForDirection:(id)a0;
- (double)lastMaxLocationOutageIntervalForDirection:(id)a0;
- (double)lastProcessingDuration;
- (unsigned long long)lastVisitCountForDirection:(id)a0;
- (unsigned long long)maxLocationCountForDirection:(id)a0;
- (double)maxLocationIntervalForDirection:(id)a0;
- (double)maxLocationOutageIntervalForDirection:(id)a0;
- (double)maxProcessingDuration;
- (unsigned long long)maxVisitCountForDirection:(id)a0;
- (void)setLocationCountForVisitCluster:(id)a0 direction:(id)a1;
- (void)setLocationIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)a0 direction:(id)a1;
- (void)setVisitCountForVisitCluster:(id)a0 direction:(id)a1;
- (void)startIterationWithVisitClusters:(id)a0;

@end
