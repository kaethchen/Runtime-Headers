@class NSOperationQueue, NSFileProviderDomain, BRCFPreferencesWrapper;

@interface BRCDesktopAndDocumentsManager : NSObject {
    BRCFPreferencesWrapper *_preferencesWrapper;
    id _cpProfileObserver;
    id _fpDomainObserver;
    NSOperationQueue *_queue;
    BOOL _isDesktopAndDocumentsRestricted;
    NSFileProviderDomain *_lastDomain;
}

@property (copy, nonatomic) id /* block */ desktopAndDocumentsEnabledChanged;
@property (copy, nonatomic) id /* block */ desktopAndDocumentsMDMRestrictionChanged;
@property (readonly, nonatomic) BOOL isDesktopAndDocumentsRestricted;

+ (BOOL)_fixSyncRootDirectoryAt:(id)a0 createIfDeleted:(BOOL)a1 withError:(id *)a2;
+ (BOOL)_removeSymlinkIfItPointsToItself:(id)a0;
+ (id)desktopAndDocumentsFolderDescriptorsWithError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)_disableiCloudDesktopAtLocations:(id)a0 completion:(id /* block */)a1;
- (void)_enableiCloudDesktopWithCompletion:(id /* block */)a0;
- (void)_fetchIsDesktopSyncEnabledWithCompletion:(id /* block */)a0;
- (void)_preferencesHaveChanged:(id)a0;
- (void)_refreshState;
- (void)setEnabled:(BOOL)a0 forDesktopAndDocumentsWithCompletion:(id /* block */)a1;

@end
