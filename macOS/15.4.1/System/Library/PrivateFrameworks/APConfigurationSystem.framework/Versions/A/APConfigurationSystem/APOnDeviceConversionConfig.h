@class NSDictionary, NSArray;

@interface APOnDeviceConversionConfig : APConfiguration

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSArray *installSignals;
@property (readonly, nonatomic) NSArray *reengagementSources;
@property (readonly, nonatomic) NSArray *incorporateJourneyMetrics;

+ (id)path;

@end
