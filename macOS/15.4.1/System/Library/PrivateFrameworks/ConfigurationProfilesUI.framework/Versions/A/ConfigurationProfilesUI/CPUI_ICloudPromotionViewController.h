@class NSString, NSImageView, NSTextField;

@interface CPUI_ICloudPromotionViewController : NSViewController

@property (retain) NSTextField *mainTitle;
@property (retain) NSTextField *mainMessage;
@property (retain) NSImageView *storageImageView;
@property (retain) NSTextField *storageTitleLabel;
@property (retain) NSTextField *storageMessageLabel;
@property (retain) NSImageView *collabImageView;
@property (retain) NSTextField *collabTitleLabel;
@property (retain) NSTextField *collabMessageLabel;
@property (retain) NSImageView *notesImageView;
@property (retain) NSTextField *notesTitleLabel;
@property (retain) NSTextField *notesMessageLabel;
@property int style;
@property (retain) NSString *storageQuota;

- (void).cxx_destruct;
- (void)viewDidLoad;

@end
