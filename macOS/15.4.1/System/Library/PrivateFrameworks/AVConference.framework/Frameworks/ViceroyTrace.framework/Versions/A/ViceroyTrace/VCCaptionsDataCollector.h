@class VCReportingHistogram, NSObject;
@protocol OS_dispatch_queue;

@interface VCCaptionsDataCollector : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _receivedCaptionsMetrics;
    unsigned int _totalCollectedCaptionsRatioMetrics;
    unsigned int _longCaptionRatioCollection;
    unsigned int _maxCaptionsRatio;
    unsigned int _captionTaskCount;
    double _lastUtteranceDuration;
    VCReportingHistogram *_captionsRatioHistogram;
    VCReportingHistogram *_captionsRatioLongHistogram;
    VCReportingHistogram *_captionsUtteranceHistogram;
    VCReportingHistogram *_captionsUsage;
}

@property (nonatomic) BOOL captionsEnabled;

- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)addAggregatedCaptionsConfigurationToReport:(id)a0;
- (void)addAggregatedCaptionsHistogramsToReport:(id)a0 shouldAlwaysAdd:(BOOL)a1;
- (void)addAggregatedCaptionsMetricsToReport:(id)a0;
- (void)addAggregatedCaptionsValueTypesToReport:(id)a0;
- (void)processCaptionsConfiguration:(id)a0;
- (void)processCaptionsMetrics:(id)a0;

@end
