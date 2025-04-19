@class NSDictionary;

@interface AVCaptureOutputSettings : NSObject

@property (nonatomic) BOOL settingsArePassthru;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary;

- (BOOL)isEqual:(id)a0;

@end
