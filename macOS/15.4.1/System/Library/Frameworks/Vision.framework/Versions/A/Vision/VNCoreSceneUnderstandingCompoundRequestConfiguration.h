@class NSString, NSDictionary, NSArray;

@interface VNCoreSceneUnderstandingCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSString *detectorType;
@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (copy, nonatomic) NSArray *originalRequestConfigurations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
