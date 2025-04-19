@interface ASDUpdateWatchApps : NSObject

+ (BOOL)shouldPromptBeforeUpdating;
+ (BOOL)updateBundleIDs:(id)a0 userInitiated:(BOOL)a1 error:(id *)a2;

@end
