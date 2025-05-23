@class NSString, NSObject;
@protocol OS_os_log;

@interface EDTruncateMailboxUpgradeStep : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)countOver10kWithConnection:(id)a0;
+ (void)presentNeedlessAlertIfNecessaryWithPersistence:(id)a0;
+ (int)runWithConnection:(id)a0;


@end
