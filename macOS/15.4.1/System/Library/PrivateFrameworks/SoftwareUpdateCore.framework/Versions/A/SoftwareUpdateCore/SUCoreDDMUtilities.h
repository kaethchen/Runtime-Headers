@interface SUCoreDDMUtilities : NSObject

+ (id)sharedLogger;
+ (BOOL)_forceSupervision;
+ (void)postNotificationOfType:(unsigned short)a0;
+ (void)postNotificationOfType:(unsigned short)a0 description:(id)a1;

@end
