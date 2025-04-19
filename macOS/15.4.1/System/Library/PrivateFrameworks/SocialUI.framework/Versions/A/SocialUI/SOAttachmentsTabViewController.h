@class SOPhotoAttachmentsViewController, SOContentAttachmentsViewController, NSSegmentedControl;
@protocol SOAttachmentsTabViewControllerDelegate;

@interface SOAttachmentsTabViewController : NSTabViewController

@property (retain) SOPhotoAttachmentsViewController *photoAttachmentsViewController;
@property (retain) SOContentAttachmentsViewController *fileAttachmentsViewController;
@property BOOL hasUpdatedAttachments;
@property (readonly, nonatomic) NSSegmentedControl *segmentedControl;
@property (weak) id<SOAttachmentsTabViewControllerDelegate> delegate;
@property (readonly) BOOL hasAttachments;
@property (readonly, nonatomic) BOOL hasPhotoAttachments;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (void)viewDidLoad;
- (void)_updateSelectedTabViewItemIndex;
- (void)chatDisplayControllerDidChange:(id)a0;
- (void)_chatItemsChanged:(id)a0;
- (void)_chatPurgedAttachmentsDownloadBatchDidComplete:(id)a0;
- (void)_parseAndSetAttachments:(id)a0;
- (void)_updateAttachments;
- (void)_updateEnabledTabs;
- (id)chatDisplayController;
- (void)chatDisplayControllerWillChange:(id)a0;
- (double)stackViewFrameDidChange:(struct CGSize { double x0; double x1; })a0;

@end
