@class NSURL;

@interface FSSettings : NSObject

@property (readonly, nonatomic) NSURL *settingsContainer;
@property (readonly, nonatomic) NSURL *probeOrderArray;
@property (readonly, nonatomic) NSURL *enabledModulesArray;

+ (id)defaultSettings;

@end
