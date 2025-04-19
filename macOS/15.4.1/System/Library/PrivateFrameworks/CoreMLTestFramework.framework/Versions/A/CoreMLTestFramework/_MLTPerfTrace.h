@class NSMutableDictionary;

@interface _MLTPerfTrace : NSObject

@property (retain) NSMutableDictionary *perfTimeLogger;
@property (retain) NSMutableDictionary *measurementDicts;
@property (retain) NSMutableDictionary *numericMeasurements;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)stopTimingMeasurementWithLabel:(id)a0;
- (void)addMeasurementDict:(id)a0 withLabel:(id)a1;
- (void)addNumericMeasurement:(id)a0 withLabel:(id)a1;
- (id)dumpAllMeasurements;
- (void)insertTimingUsMeasurementWithLabel:(id)a0 delta:(double)a1;
- (id)recordCompletedAsyncRequestCountWithLabel:(id)a0 completedAsyncRequestCount:(int)a1;
- (id)startTimingMeasurementWithLabel:(id)a0;

@end
