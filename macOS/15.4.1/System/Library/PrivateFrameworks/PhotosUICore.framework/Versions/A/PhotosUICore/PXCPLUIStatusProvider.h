@class PXCPLStatusProviderMonitor, NSString, PXObservable, PXAssetsDataSourceCountsController, PXCPLActionManager, PXCPLUIStatus, NSDate;
@protocol PXCPLStatusProvider;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXCPLStatusProviderMonitor *_statusProviderMonitor;
    PXObservable<PXCPLStatusProvider> *_statusProvider;
    PXAssetsDataSourceCountsController *_countsController;
}

@property (copy, nonatomic) NSDate *currentDateForTesting;
@property (readonly, nonatomic) PXCPLUIStatus *status;
@property (readonly, nonatomic) PXCPLActionManager *actionManager;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_updateStatus;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_statusDidChange:(id)a0;
- (void)_updateStatusProviderMonitor;
- (id)initWithPhotoLibrary:(id)a0 actionManager:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 actionManager:(id)a1 countsController:(id)a2 presentationStyle:(unsigned long long)a3;
- (id)initWithPhotoLibrary:(id)a0 actionManager:(id)a1 presentationStyle:(unsigned long long)a2;
- (id)initWithPhotoLibrary:(id)a0 countsController:(id)a1;
- (id)initWithStatusProvider:(id)a0 actionManager:(id)a1 countsController:(id)a2 presentationStyle:(unsigned long long)a3;

@end
