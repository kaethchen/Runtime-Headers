@class NSNumber, DisplayServicesClient, NSString;

@interface DMTConfigurationDisplayBrightnessPrimitives : NSObject <DMTDisplayBrightnessPrimitives>

@property (retain, nonatomic) NSNumber *originalBrightnessLevel;
@property (readonly, nonatomic) DisplayServicesClient *displayServicesClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)recordOriginalBrightnessLevel;
- (void)setBrightnessLevelTo:(id)a0;
- (void)setBrightnessToMaxValue;
- (void)setBrightnessToOriginalValue;

@end
