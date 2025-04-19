@class NSString, PXCPLUIStatusProvider, PXUpdater, PXFooterViewModel, PHPhotoLibrary, NSObject, PXEventCoalescer, PXAssetsDataSourceCountsController;
@protocol OS_dispatch_queue;

@interface PXFooterViewModelController : NSObject <PXChangeObserver, PXEventCoalescerObserver> {
    PHPhotoLibrary *_photoLibrary;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;

@property (retain, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXEventCoalescer *updateCoalescer;
@property (readonly, nonatomic) PXFooterViewModel *footerViewModel;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_updateQueue_viewModelConfigurationWithStatus:(id)a0 counts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 photoLibrary:(id)a2;
+ (void)loadAsyncUpdatesImmediately;

- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateFooterViewModel;
- (void)_mainQueue_finishUpdateWithCPLStatus:(id)a0 viewModelConfiguration:(id /* block */)a1;
- (void)_prepareCounts;
- (void)_updateFooterViewModel;
- (id)initWithPhotoLibrary:(id)a0 provideLibraryCounts:(BOOL)a1 provideCloudQuotaOffers:(BOOL)a2;
- (void)outputEventSignaledForCoalescer:(id)a0;

@end
