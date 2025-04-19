@interface CSHostLauncherDarwin : NSObject

+ (id)sharedInstance;

- (id)init;
- (BOOL)wakeHostForVoiceTrigger;

@end
