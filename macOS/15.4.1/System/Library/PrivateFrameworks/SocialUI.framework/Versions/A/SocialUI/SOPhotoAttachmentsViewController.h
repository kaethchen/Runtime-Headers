@class IKImageBrowserView;

@interface SOPhotoAttachmentsViewController : SOAttachmentsViewController

@property (retain) IKImageBrowserView *imageBrowserView;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidAppear;
- (void)imageBrowser:(id)a0 cellWasRightClickedAtIndex:(unsigned long long)a1 withEvent:(id)a2;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (id)imageBrowser:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (void)_deleteSelection;
- (void)_importSelectionToIPhoto;
- (void)_openImageBrowserSelection;
- (id)actionableIndexes:(id)a0;
- (void)attachmentsDidChange;
- (void)chatDisplayControllerWillChange:(id)a0;
- (void)setUpImageBrowser;

@end
