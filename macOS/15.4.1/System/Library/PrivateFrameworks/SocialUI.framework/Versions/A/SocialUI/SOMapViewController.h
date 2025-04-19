@class NSArray, FMFMapViewController, NSString;

@interface SOMapViewController : NSViewController <FMFMapViewControllerDelegate>

@property (retain) FMFMapViewController *fmfViewController;
@property (copy) NSArray *trackedIMHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowWillClose:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)_windowOcclusionStateDidChange:(id)a0;
- (id)annotationImageForHandle:(id)a0;
- (void)fmfMapViewController:(id)a0 didSelectHandle:(id)a1;
- (void)_activateLocation;
- (void)_cleanFMFMapViewController;
- (void)_deactivateLocation;
- (void)_setupFMFMapViewController;
- (id)annotationABRecordForHandle:(id)a0;
- (void)recenterLocation;
- (void)selectHandle:(id)a0;
- (void)updateRefreshState;
- (void)updateTrackedIMHandles:(id)a0;

@end
