@class NSArray, NSString, PHPhotoLibrary, PXPeopleDetailsContext, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL prefetchingStarted;
@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) BOOL containsSocialGroups;
@property (retain, nonatomic) PXPeopleDetailsContext *context;
@property (nonatomic) BOOL isForOneUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (void)loadMembersWithCompletionBlock:(id /* block */)a0;
- (void)_updateMembers;
- (void)imageCacheDidChanged:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 name:(id)a1 objectsReloadBlock:(id /* block */)a2;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 maxFetchCount:(unsigned long long)a2;

@end
