@class PUPickerExtensionHostContext, PHPickerConfiguration, NSString, PUPickerRemoteViewController, NSExtension;
@protocol PHPickerViewControllerDelegate, NSCopying;

@interface PHPickerViewController : NSViewController <_PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextHostInterface>

@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension;
@property (copy, nonatomic, setter=_setExtensionRequestIdentifier:) id<NSCopying> _extensionRequestIdentifier;
@property (retain, nonatomic, setter=_setExtensionContext:) PUPickerExtensionHostContext *_extensionContext;
@property (retain, nonatomic, setter=_setRemoteViewController:) PUPickerRemoteViewController *_remoteViewController;
@property (retain, nonatomic, setter=_setOverlayStorage:) id _overlayStorage;
@property (readonly, copy, nonatomic) PHPickerConfiguration *configuration;
@property (weak, nonatomic) id<PHPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredMinimumSize;
- (id)initWithConfiguration:(id)a0;
- (void)_updateEffectiveAppearance;
- (void)loadView;
- (void)_setup:(id /* block */)a0;
- (void)zoomOut;
- (void)zoomIn;
- (void)_searchWithString:(id)a0;
- (BOOL)_popViewController;
- (void)_deselectAssetsWithIdentifiers:(id)a0;
- (void)updatePickerUsingConfiguration:(id)a0;
- (void)_addOrReplaceChildUnavailableViewController:(unsigned long long)a0 error:(id)a1;
- (void)_addOrReplaceChildViewController:(id)a0;
- (void)_cancelExistingExtensionRequestIfPossible;
- (void)_finishPickingWithResults:(id)a0;
- (void)_handleRemoteViewControllerConnection:(id)a0 extension:(id)a1 extensionRequestIdentifier:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)_moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (void)_pickerDidFinishPicking:(id)a0;
- (void)_pickerDidPerformCancelAction;
- (void)_pickerDidPerformConfirmationAction;
- (void)_pickerDidSetModalInPresentation:(BOOL)a0;
- (void)_pickerDidSetOnboardingHeaderDismissed:(BOOL)a0;
- (void)_pickerDidSetOnboardingOverlayDismissed:(BOOL)a0;
- (void)_pickerUnavailableViewControllerCancelButtonTapped:(id)a0;
- (void)_pickerUnavailableViewControllerRetryButtonTapped:(id)a0;
- (void)_setupExtension:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)a0;
- (void)_updateSelectedAssetsWithIdentifiers:(id)a0;
- (void)deselectAssetsWithIdentifiers:(id)a0;
- (void)moveAssetWithIdentifier:(id)a0 afterAssetWithIdentifier:(id)a1;
- (void)scrollToInitialPosition;

@end
