@class PXCPLPhotoLibrarySource, NSString, PXCPLStatusSource, PXCPLSharedLibraryActivity, PXCPLStatus, PXFetchResultCountObserver, PXCPLSyncActivity, NSObject, PXCPLCloudQuotaSource, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXCPLStatusProvider : PXObservable <PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    PXCPLStatusSource *_cplStatusSource;
    PXCPLPhotoLibrarySource *_photoLibrarySource;
    PXCPLSyncActivity *_syncActivity;
    PXCPLSharedLibraryActivity *_sharedLibraryActivity;
    PXFetchResultCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    PXCPLCloudQuotaSource *_cloudQuotaSource;
    BOOL _hasCloudQuotaOffer;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    BOOL _isUpdating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXCPLStatus *status;

+ (id)sharedQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_main_handleUpdatedStatus:(id)a0 producedForUpdateType:(unsigned long long)a1 timeIntervalProducingUpdatedStatus:(double)a2;
- (void)_performUpdate;
- (void)_queue_performUpdateWithStatus:(id)a0 updateType:(unsigned long long)a1;
- (void)_schedulePendingUpdates;
- (void)_scheduleUpdateForType:(unsigned long long)a0;
- (void)_setStatus:(id)a0 producedForUpdateType:(unsigned long long)a1 timeIntervalProducingUpdatedStatus:(double)a2;
- (id)_updateStatus:(id)a0 requestedTypes:(unsigned long long)a1;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (double)nextOverrideResumeTimeInterval;

@end
