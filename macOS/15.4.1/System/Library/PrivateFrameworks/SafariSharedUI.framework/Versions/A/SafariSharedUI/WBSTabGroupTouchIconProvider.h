@class NSString;

@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configuration;
- (id)backgroundColor;
- (BOOL)canHandleRequest:(id)a0;
- (id)defaultFolderIconForRequest:(id)a0;
- (id)folderUUIDForRequest:(id)a0;
- (id)iconForTabGroup:(id)a0;
- (id)subrequestsForRequest:(id)a0 maximumNumberOfSubrequests:(unsigned long long)a1;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (void)tabGroupManager:(id)a0 didUpdateTabsInTabGroupWithUUID:(id)a1;
- (BOOL)canProvideUpdatesForRequest:(id)a0;

@end
