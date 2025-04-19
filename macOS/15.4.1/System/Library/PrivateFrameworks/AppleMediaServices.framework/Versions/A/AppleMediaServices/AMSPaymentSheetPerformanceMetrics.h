@class AMSBag;

@interface AMSPaymentSheetPerformanceMetrics : NSObject

@property double primaryDataResponseStartTime;
@property double primaryDataResponseEndTime;
@property double primaryDataParseStartTime;
@property double primaryDataParseEndTime;
@property double resourceRequestStartTime;
@property double resourceRequestEndTime;
@property (readonly) AMSBag *bag;

- (void).cxx_destruct;
- (void)enqueueMetricsEventWithOverlay:(id)a0;
- (id)initWithBag:(id)a0;

@end
