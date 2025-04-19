@class NSMeasurement, GEOPDHikeSummary;

@interface GEOHikeSummary : NSObject

@property (copy, nonatomic) NSMeasurement *elevationGainMeters;
@property (copy, nonatomic) NSMeasurement *elevationLossMeters;
@property (copy, nonatomic) NSMeasurement *expectedDurationSeconds;
@property (copy, nonatomic) NSMeasurement *lengthMeters;
@property (readonly, nonatomic) GEOPDHikeSummary *hikeSummary;

- (void).cxx_destruct;
- (id)_GEOStringForDistanceMeasurement:(id)a0 forUnit:(id)a1 allowUnitConversion:(BOOL)a2;
- (id)durationString;
- (id)elevationGainStringForUnit:(id)a0;
- (id)elevationLossStringForUnit:(id)a0;
- (id)hikeTypeNameString;
- (id)initWithPDHikeSummary:(id)a0;
- (id)lengthStringForUnit:(id)a0;

@end
