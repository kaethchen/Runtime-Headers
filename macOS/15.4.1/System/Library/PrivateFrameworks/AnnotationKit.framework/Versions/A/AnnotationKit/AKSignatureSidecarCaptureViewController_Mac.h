@class NSTextField, AKController, NSString, AKSignatureDescriptionViewController_Mac, AKSidecarSignatureRequest, SidecarDevice, NSButton, AKSignatureOutputView_Mac, NSSegmentedControl;

@interface AKSignatureSidecarCaptureViewController_Mac : NSViewController <AKSidecarSignatureRequestDelegate, AKSignatureDescriptionDelegate> {
    AKSidecarSignatureRequest *_request;
    SidecarDevice *_selectedDevice;
    NSString *_signatureDescription;
}

@property (retain) AKSignatureOutputView_Mac *signatureView;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *clearButton;
@property (retain) NSButton *doneButton;
@property (retain) NSTextField *bottomInstructions;
@property (retain) NSSegmentedControl *devicePickerButton;
@property (retain) AKSignatureDescriptionViewController_Mac *signatureDescriptionViewController;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ appearanceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)cancel:(id)a0;
- (void)awakeFromNib;
- (void)clear:(id)a0;
- (void)done:(id)a0;
- (id)initWithController:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)stopCapture;
- (void)setCurrentSignatureDescription:(id)a0;
- (void)_devicePicked:(id)a0;
- (void)_startWithDevice:(id)a0;
- (void)descriptionViewController:(id)a0 willHide:(BOOL)a1;
- (void)request:(id)a0 updatedSignature:(id)a1;
- (void)requestComplete:(id)a0 cancelled:(BOOL)a1;
- (void)showDevicePicker:(id)a0;

@end
