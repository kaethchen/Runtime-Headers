@class EKUIResizingTextField, NSView, NSString, NSSharingServicePicker, NSButton;

@interface EKUISubscriptionURLGadget : EKUISingleViewGadget <NSSharingServicePickerDelegate>

@property (retain) NSView *containerView;
@property (retain) EKUIResizingTextField *urlField;
@property (retain) NSButton *shareButton;
@property (retain) NSSharingServicePicker *sharingServicePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)menuItemTitleForSharingService:(id)a0;
- (id)infoViewPublicURL;
- (double)pixelsBetweenLabelAndControl;
- (id)publicURLSharingServices;
- (id)servicesForShareButtonMenu;
- (void)shareButtonClicked:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (id)viewForBaselineAlignment;

@end
