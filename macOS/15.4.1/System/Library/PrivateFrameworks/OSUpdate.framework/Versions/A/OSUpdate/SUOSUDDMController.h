@class SUOSUNotificationManagerController, NSString;

@interface SUOSUDDMController : NSObject <SUCoreDDMControllerProtocol>

@property (retain) SUOSUNotificationManagerController *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)rescheduleDDMEnforcedDateTimeUpdate;
+ (void)scheduleDDMNotifications;
+ (BOOL)scheduleUpdateVersion:(id)a0 forDateTime:(id)a1 options:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)scheduleUpdate:(id)a0;
- (BOOL)cancelUpdate:(id)a0;
- (BOOL)cancelUpdateForKey:(id)a0 withError:(id *)a1;
- (id)declarationsWithError:(id *)a0;
- (void)getDDMStatusWithKeys:(id)a0 completion:(id /* block */)a1;
- (id)globalSettingsDeclarationWithError:(id *)a0;
- (BOOL)removeGlobalSettingsDeclarationWithError:(id *)a0;
- (BOOL)scheduleUpdate:(id)a0 withError:(id *)a1;
- (BOOL)setGlobalSettings:(id)a0 withError:(id *)a1;

@end
