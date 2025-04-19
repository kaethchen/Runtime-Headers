@class NSString, NSView, NSSharingServicePicker, ICServicesRolloverView, ICAttachment;

@interface ICAttachmentSharingServicePickerController : NSObject <NSGestureRecognizerDelegate, NSSharingServicePickerDelegate, NSSharingServiceDelegate, ICServicesRolloverViewDelegate>

@property (weak, nonatomic) NSView *view;
@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) ICServicesRolloverView *servicesRolloverView;
@property (nonatomic) struct CGSize { double x0; double x1; } rolloverViewInset;
@property (readonly, nonatomic) NSSharingServicePicker *sharingServicePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)pickerForRolloverCalloutView:(id)a0;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (id)initWithView:(id)a0 attachment:(id)a1;
- (id)initWithView:(id)a0 attachment:(id)a1 rolloverViewInset:(struct CGSize { double x0; double x1; })a2;
- (id)rolloverView;
- (void)setupForMarkup;

@end
