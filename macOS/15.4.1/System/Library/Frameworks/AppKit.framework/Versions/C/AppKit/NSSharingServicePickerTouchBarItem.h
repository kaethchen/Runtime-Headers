@class NSString, NSImage, NSTouchBar, NSTouchBarSharingServicePickerViewController, NSPopoverTouchBarItem;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSSharingServicePickerTouchBarItem : NSTouchBarItem <NSTouchBarItemTypePopover> {
    NSPopoverTouchBarItem *_internalPopoverItem;
    NSTouchBarSharingServicePickerViewController *_pickerViewController;
}

@property (readonly) NSTouchBar *popoverFunctionBar;
@property (readonly) BOOL supportsPressAndHold;
@property (readonly) BOOL showsCloseButton;
@property (readonly) BOOL isPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *customizationLabel;
@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *buttonTitle;
@property (retain) NSImage *buttonImage;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setButtonTitle:(id)a0;
- (void)dismissPopover:(id)a0;
- (void)setButtonImage:(id)a0;
- (void)_makeInternalPopoverItemWithButtonTitle:(id)a0 buttonImage:(id)a1;
- (id)_shareButton;
- (long long)_type;
- (id)buttonImage;
- (id)buttonTitle;
- (id)items;
- (id)itemsForSharingServicePickerTouchBarItem:(id)a0;
- (void)setItems:(id)a0;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePickerCollaborationModeRestrictions:(id)a0;
- (void)showPopover:(id)a0;

@end
