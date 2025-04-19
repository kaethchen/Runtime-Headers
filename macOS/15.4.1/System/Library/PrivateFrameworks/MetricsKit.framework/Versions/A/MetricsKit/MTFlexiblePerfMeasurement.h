@class NSString, NSArray;

@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData>

@property (readonly, copy) NSString *eventType;
@property (readonly, copy) NSArray *eventData;
@property (readonly, copy) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *eventType;

@end
