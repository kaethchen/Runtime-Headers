@class CKVTaskSettings, NSString, CKVTaskCoalescer, NSURL, NSObject, CKVTaskManagerInfo;
@protocol CKVDonateTaskProvider, CCSetEnumerator;

@interface CKVTaskManager : NSObject {
    NSString *_managerName;
    NSURL *_rootDirectoryURL;
    CKVTaskCoalescer *_coalescer;
    NSObject<CCSetEnumerator> *_setEnumerator;
}

@property (readonly, nonatomic) CKVTaskManagerInfo *info;
@property (readonly, nonatomic) CKVTaskSettings *settings;
@property (readonly, nonatomic) NSObject<CKVDonateTaskProvider> *donateTaskProvider;

+ (id)defaultManager;
+ (id)dailyDonateTasks;
+ (id)migrationDonateTasks;
+ (id)siriLanguageDependentDonateTasks;
+ (id)verificationTasks;

- (void).cxx_destruct;
- (id /* block */)_blockToCollectInstalledAppBundleIds:(id)a0;
- (id)_findContactSet;
- (id /* block */)_cleanUpDeletedAppDonationsTaskBlock:(unsigned short)a0;
- (id /* block */)_derivativeTaskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id)_descriptorForSiriLocale;
- (BOOL)_didLocalizationChange:(unsigned short)a0;
- (BOOL)_didTriggerMigration:(id /* block */)a0 reason:(unsigned short)a1;
- (void)_enumerateLocalInstancesOfSet:(id)a0 hasDelta:(BOOL *)a1 fromBookmark:(BOOL *)a2;
- (BOOL)_enumerateLocalInstancesOfSet:(id)a0 priorBookmark:(id)a1 newBookmark:(id *)a2 hasDelta:(BOOL *)a3 addedInstancesBlock:(id /* block */)a4;
- (id)_findInstalledAppSet;
- (id)_firstSetWithItemType:(unsigned short)a0 inSets:(id)a1;
- (id)_firstSetWithItemType:(unsigned short)a0 matchingDescriptor:(id)a1 inSets:(id)a2;
- (BOOL)_isClearRequiredForSet:(id)a0 installedAppBundleIds:(id)a1;
- (BOOL)_isDeleteRequiredForSet:(id)a0 installedAppBundleIds:(id)a1;
- (BOOL)_isSet:(id)a0 excludedFromInstalledAppBundleIds:(id)a1;
- (BOOL)_loadOrCreateTaskInfo;
- (id /* block */)_maintenanceTaskBlockWithReason:(unsigned short)a0 shouldDefer:(id /* block */)a1;
- (void)_postNotification:(const char *)a0 forChangeToItemType:(unsigned short)a1;
- (void)_runInstalledAppDerivativeTasksWithReason:(unsigned short)a0;
- (id /* block */)_siriLanguageChangedTaskBlockWithReason:(unsigned short)a0;
- (void)_submitTask:(unsigned short)a0 reason:(unsigned short)a1 taskBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id /* block */)_taskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_validateFilesystemState;
- (id /* block */)_verificationTaskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id /* block */)_wakePodcastsTaskBlockWithReason:(unsigned short)a0;
- (id /* block */)_wrapperForTaskBlock:(id /* block */)a0 checkingEnablement:(unsigned short)a1 reason:(unsigned short)a2;
- (BOOL)clearAllState;
- (void)enableSimulatedTasks:(BOOL)a0;
- (BOOL)handleTask:(unsigned short)a0 reason:(unsigned short)a1 shouldDefer:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithManagerName:(id)a0 rootDirectoryURL:(id)a1 setEnumerator:(id)a2 settings:(id)a3;

@end
