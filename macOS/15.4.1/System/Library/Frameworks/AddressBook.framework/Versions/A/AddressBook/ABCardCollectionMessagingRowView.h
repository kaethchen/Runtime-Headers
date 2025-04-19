@class NSPopUpButton, NSTextField;

@interface ABCardCollectionMessagingRowView : ABCardCollectionRowView

@property (retain) NSTextField *messagingServiceLabel;
@property (retain) NSPopUpButton *messagingServiceChooserPopup;

- (void).cxx_destruct;
- (void)setService:(id)a0;
- (void)setServiceMenu:(id)a0;
- (void)setServicePopUpEnabled:(BOOL)a0;
- (void)updateTextColors;
- (void)updateValueFontWithFont:(id)a0;

@end
