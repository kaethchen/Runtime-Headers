@class NSTextField, NSString, NSArray, NSPopUpButton, NSMenuItem;

@interface FileFormatAccessoryViewController : NSViewController

@property (weak, nonatomic) NSPopUpButton *popUpButton;
@property (weak, nonatomic) NSMenuItem *pageSourceMenuItem;
@property (weak, nonatomic) NSMenuItem *webArchiveMenuItem;
@property (weak, nonatomic) NSMenuItem *pngMenuItem;
@property (weak, nonatomic) NSTextField *pageSourceDescriptionLabel;
@property (weak, nonatomic) NSTextField *webArchiveDescriptionLabel;
@property (weak, nonatomic) NSTextField *pngDescriptionLabel;
@property (nonatomic) int fileFormat;
@property (nonatomic) long long savePanelMode;
@property (copy, nonatomic) NSString *rawSourceMIMEType;
@property (readonly, copy, nonatomic) NSArray *allowedMIMETypes;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_hideMenuItems;
- (void)_selectMenuItemBasedOnFileFormat;
- (void)_updateContentTypes;
- (void)_updateInformationText;
- (void)popUpButtonUpdated:(id)a0;

@end
