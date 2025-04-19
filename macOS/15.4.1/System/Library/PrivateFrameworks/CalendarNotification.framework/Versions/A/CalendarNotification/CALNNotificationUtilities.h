@interface CALNNotificationUtilities : NSObject

+ (id)_pathForSentinelFile;
+ (void)createSentinelFileIfNeeded;
+ (BOOL)shouldBehaveAsRestart;

@end
