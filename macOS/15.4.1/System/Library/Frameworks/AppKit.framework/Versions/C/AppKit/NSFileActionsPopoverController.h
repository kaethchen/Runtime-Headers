@class NSString, NSDictionary, NSTitlebarPopoverLocalFileOpsViewController, NSURL, NSPopover;
@protocol NSFileActionsPopoverDelegate;

@interface NSFileActionsPopoverController : NSObject <NSTitlebarPopoverViewControllerDataSource, NSTitlebarPopoverLocalFileOpsViewControllerDelegate, NSPopoverDelegate> {
    NSPopover *_popover;
    NSTitlebarPopoverLocalFileOpsViewController *_popoverViewController;
    NSURL *_originalURL;
    BOOL _popoverHasWarmedUp;
}

@property (weak, nonatomic) id<NSFileActionsPopoverDelegate> fileActionsDelegate;
@property (readonly, nonatomic) NSPopover *popover;
@property (readonly) NSDictionary *initialViewBridgeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fileURLIsNow:(id)a0;
- (id)initWithFileURL:(id)a0 delegate:(id)a1;
- (BOOL)popoverShouldClose:(id)a0;
- (void)viewControllerDidFinishUp;
- (void)warmUpWithPopoverPresentationBlock:(id /* block */)a0;

@end
