@class PXNSContentUnavailableConfiguration, PXStatusViewModel, NSString;
@protocol PXStatusControllerDelegate, NSObject;

@interface PXStatusController : NSObject <PXChangeObserver>

@property (retain, nonatomic) id<NSObject> confirmationAlertToken;
@property (retain, nonatomic) PXStatusViewModel *viewModel;
@property (weak, nonatomic) id<PXStatusControllerDelegate> delegate;
@property (readonly, nonatomic) PXNSContentUnavailableConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleButtonAction:(id)a0;
- (void)_updateButtonTitle;
- (void)_updateMessage;

@end
