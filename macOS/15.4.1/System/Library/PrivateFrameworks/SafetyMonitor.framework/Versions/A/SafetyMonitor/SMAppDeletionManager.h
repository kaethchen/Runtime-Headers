@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMAppDeletionManager : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)databaseWasRebuilt;
- (void)_removeObserver:(id)a0;
- (void)_setup;
- (void)_addObserver:(id)a0;
- (BOOL)isMessagesAppInstalled;
- (void)setup;
- (void)_applicationsDidInstall:(id)a0;
- (void)_applicationsDidUninstall:(id)a0;
- (void)_databaseWasRebuilt;
- (void)_notifyObserversForMessagesAppInstalled;
- (void)_notifyObserversForMessagesAppUninstalled;
- (void)_notifyObserversWithUpdatedMessagesInstallation;

@end
