@class NSTextField, NSString, NSPopUpButton, NSMenu, NSColor;

@interface ComposeStatusView : NSStackView

@property (retain, nonatomic) NSTextField *messageSizeLabel;
@property (retain, nonatomic) NSTextField *messageSizeTextField;
@property (retain, nonatomic) NSTextField *imageSizePickerLabel;
@property (retain, nonatomic) NSPopUpButton *imageSizePickerPopup;
@property (retain, nonatomic) NSTextField *URLPickerLabel;
@property (retain, nonatomic) NSPopUpButton *URLPickerButton;
@property (nonatomic) BOOL showsURLPicker;
@property (nonatomic) BOOL showsImageSizePicker;
@property (nonatomic) BOOL showsMessageSizeLabel;
@property (readonly, nonatomic) BOOL canHideStatusBar;
@property (nonatomic) long long selectedSharingDisplayType;
@property (nonatomic) long long selectedImageConversionOption;
@property (copy, nonatomic) NSString *messageSizeValue;
@property (retain, nonatomic) NSColor *messageSizeColor;
@property (readonly, weak, nonatomic) NSMenu *URLPickerMenu;
@property (readonly, weak, nonatomic) NSMenu *imageSizeMenu;

+ (id)keyPathsForValuesAffectingMessageSizeColor;
+ (id)keyPathsForValuesAffectingMessageSizeValue;
+ (id)keyPathsForValuesAffectingSelectedImageSize;
+ (id)keyPathsForValuesAffectingSelectedSharingDisplayType;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
