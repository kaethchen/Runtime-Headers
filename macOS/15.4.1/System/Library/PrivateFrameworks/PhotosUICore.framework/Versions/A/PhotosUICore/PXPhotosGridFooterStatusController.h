@class PXLemonadeFeatureAvailabilityMonitor, NSString, PXPhotosViewModel, PXCPLPhotoLibrarySource, PHPhotoLibrary, PXCPLUIStatusProvider, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver> {
    PXPhotosViewModel *_viewModel;
    PHPhotoLibrary *_photoLibrary;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLPhotoLibrarySource *_photoLibrarySource;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    Class _cplActionManagerClass;
    PXLemonadeFeatureAvailabilityMonitor *_featureAvailabilityMonitor;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateFooterIfNeededWithReason:(id)a0;
- (void)_updateFooterViewModelWithReason:(id)a0;
- (void)_updateHasImportantInformation;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;

@end
