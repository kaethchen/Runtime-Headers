@class NSArray, NSString, NSMutableDictionary, NSMutableArray;
@protocol MTPerfBaseMeasurementTransformation;

@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData> {
    NSMutableArray *_additionalData;
    NSArray *_eventData;
}

@property (readonly, copy) NSArray *eventData;
@property (readonly, copy) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableDictionary *timestamps;
@property (retain) NSMutableDictionary *measurementSpecificData;
@property (weak) id<MTPerfBaseMeasurementTransformation> measurementTransformer;

- (void).cxx_destruct;
- (id)record;
- (id)metricsData;
- (void)addFields:(id)a0;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;
- (id)getAdditionalData;
- (id)initWithMeasurementTransformer:(id)a0 eventData:(id)a1;

@end
