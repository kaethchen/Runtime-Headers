@interface PCSMobileBackup : NSObject

+ (id)defaultMobileBackup;

- (id)init;
- (BOOL)isBackupEnabled;

@end
