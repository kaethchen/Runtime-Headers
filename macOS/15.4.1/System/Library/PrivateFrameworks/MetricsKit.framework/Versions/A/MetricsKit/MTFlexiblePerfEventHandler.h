@class NSString;
@protocol MTFlexiblePerfEventHandlerDelegate;

@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<MTFlexiblePerfEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)metricsDataWithPerfMeasurement:(id)a0;
- (id)metricsDataWithEventType:(id)a0 eventData:(id)a1;
- (BOOL)mtIncludeBaseFields;
- (id)xpSamplingPercentage:(id)a0;

@end
