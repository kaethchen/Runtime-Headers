@class SCSensitivityAnalysisAvailabilityObserver;

@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver *_analysisAvailabilityObserver;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObserver:(id)a0;

@end
