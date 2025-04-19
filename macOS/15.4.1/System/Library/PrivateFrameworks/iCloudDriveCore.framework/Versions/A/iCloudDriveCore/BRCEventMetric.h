@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithEventName:(id)a0;
- (void)associateWithCompletedOperation:(id)a0;
- (id)additionalPayload;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;

@end
