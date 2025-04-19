@class NSPopover, NSString, NSTextField, NSScrollView, DownloadViewController, NSSegmentedControl;

@interface DownloadsPopoverViewController : NSViewController <NSPopoverDelegate> {
    NSSegmentedControl *_clearSegment;
    DownloadViewController *_listViewController;
    NSTextField *_titleLabel;
    NSScrollView *_listScrollView;
}

@property (class, readonly, nonatomic) BOOL canShowPopover;

@property (retain, nonatomic) NSPopover *popover;
@property (readonly, nonatomic, getter=isShowingPopover) BOOL showingPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (void)determinePopoverAvailabilityWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_windowWillClose:(id)a0;
- (void)clear:(id)a0;
- (void)loadView;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldDetach:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_downloadEntryStageChanged:(id)a0;
- (void)_downloadViewSizeDidChange:(id)a0;
- (void)_downloadsDidChange:(id)a0;
- (void)_updateClearSegment;
- (void)_updateContentSizeAllowingSmallerWidth:(BOOL)a0;
- (void)_updateContentSizeForDownloadsChange;
- (struct CGSize { double x0; double x1; })bestSizeAllowingSmallerWidth:(BOOL)a0;
- (void)closePopoverIfNecessary;
- (id)popoverPositioningView;
- (void)togglePopoverWithPositioningView:(id)a0;
- (void)togglePopoverWithPositioningView:(id)a0 preferredEdge:(unsigned long long)a1;

@end
