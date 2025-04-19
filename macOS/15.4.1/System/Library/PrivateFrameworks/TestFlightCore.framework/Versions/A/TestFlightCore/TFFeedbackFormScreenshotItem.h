@class NSString, NSImage, NSTrackingArea, NSButton;
@protocol TFFeedbackFormScreenshotItemDelegate;

@interface TFFeedbackFormScreenshotItem : NSCollectionViewItem

@property (weak, nonatomic) NSButton *removalButton;
@property (weak, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *fileName;
@property (weak, nonatomic) id<TFFeedbackFormScreenshotItemDelegate> delegate;

- (void).cxx_destruct;
- (void)cursorUpdate:(id)a0;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)fileNameCaption;
- (id)captionTextFieldForFileName:(id)a0;
- (void)didUpdateDataSource:(id)a0;
- (void)refreshTrackingArea;
- (id)removalButtonForFileName:(id)a0;
- (void)removeScreenshot:(id)a0;
- (BOOL)shouldHideRemovalButtonByDefault;

@end
