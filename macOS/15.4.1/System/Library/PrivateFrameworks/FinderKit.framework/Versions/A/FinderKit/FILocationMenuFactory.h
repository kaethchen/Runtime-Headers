@class NSString, NSArray, NSPopUpButton, NSObject;
@protocol OS_dispatch_queue, FILocationMenuItemTargetProtocol;

@interface FILocationMenuFactory : NSObject <TMarkTornDown> {
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct TNSWeakPtr<NSPopUpButton> { NSPopUpButton *fWeakObject; } _weakPopUpButton;
    struct shared_ptr<TIconFetcher> { struct TIconFetcher *__ptr_; struct __shared_weak_count *__cntrl_; } _iconFetcher;
    struct unique_ptr<FIAmbiguousMenuItems, std::default_delete<FIAmbiguousMenuItems>> { struct __compressed_pair<FIAmbiguousMenuItems *, std::default_delete<FIAmbiguousMenuItems>> { struct FIAmbiguousMenuItems *__value_; } __ptr_; } _ambiguousMenuItems;
    struct FIBuildMenuData { struct TFENode { struct OpaqueNodeRef *fNodeRef; } fTargetNode; struct TFENode { struct OpaqueNodeRef *fNodeRef; } fICloudContainer; struct TFENode { struct OpaqueNodeRef *fNodeRef; } fDataSeparatedICloudContainer; NSArray *fRecentPlacesURLs; struct TNSWeakPtr<NSObject<FILocationMenuItemTargetProtocol>> { NSObject<FILocationMenuItemTargetProtocol> *fWeakObject; } fWeakMenuItemTarget; double fScaleFactor; BOOL fIsDarkBackground; BOOL fIsSavePanel; BOOL fInMovePanel; BOOL fIncludeAncestors; BOOL fShowKeyEquivalents; BOOL fShowICloud; BOOL fShowFavorites; BOOL fShowDevices; BOOL fSidebarIsHidden; BOOL fWantsShowHideSidebarSection; BOOL fShowOtherSection; } _data;
    unsigned long long _generationCount;
}

@property (readonly, weak) NSPopUpButton *popUpButton;
@property (readonly) const void *data;
@property (readonly) unsigned long long generationCount;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)menu;
- (void)stop;
- (void)aboutToTearDown;
- (id)initWithPopUpButton:(id)a0;
- (id)addMenuItemForNodeOnMainThread:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)addMenuItemsForCloudMetadataOnMainThread:(id)a0 targetOnly:(BOOL)a1 mainICloud:(BOOL)a2;
- (void)_addMenuItemsForParentNodeOnQueue:(void *)a0 nodesInMenu:(void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3 parent:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a4 sectionTitleKey:(id)a5;
- (BOOL)_shouldBailOutWhileLocked:(unsigned long long)a0;
- (void)_stopWhileLocked;
- (void)addDevicesItemsOnQueue:(void *)a0 nodesInMenu:(void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3;
- (void)addFavoritesItemsOnQueue:(void *)a0 nodesInMenu:(void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3;
- (void)addICloudSection:(int)a0 onQueue:(void *)a1 nodesInMenu:(void *)a2 data:(const void *)a3 genCount:(unsigned long long)a4;
- (void)addOtherSectionOnQueue:(void *)a0 data:(const void *)a1 genCount:(unsigned long long)a2;
- (void)addRecentPlacesOnQueue:(void *)a0 nodesInMenu:(void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3;
- (void)addSeparatorAndSectionTitleOnMainThread:(id)a0;
- (void)addShowSidebarSectionOnQueue:(void *)a0 data:(const void *)a1 genCount:(unsigned long long)a2;
- (void)addTargetItemsOnQueue:(void *)a0 nodesInMenu:(void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3;
- (void)buildMenu:(const void *)a0;
- (void)buildMenuOnMainThread:(const void *)a0;
- (void)buildMenuOnQueue:(unsigned long long)a0;
- (id)imageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 data:(const void *)a1 iconFetcher:(const void *)a2 asyncCallback:(const void *)a3;
- (id)insertMenuItemForNodeOnMainThread:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 atIndex:(long long *)a1;
- (void)insertSeparatorAndSectionTitleOnMainThread:(id)a0 atIndex:(long long *)a1;
- (struct shared_ptr<TIconFetcher> { struct TIconFetcher *x0; struct __shared_weak_count *x1; })prefetchIconsOnQueue:(void *)a0 nodesInMenu:(const void *)a1 data:(const void *)a2;
- (void)prefetchIconsOnQueue:(void *)a0 nodesInMenu:(const void *)a1 data:(const void *)a2 genCount:(unsigned long long)a3;
- (BOOL)shouldBailOut:(unsigned long long)a0;

@end
