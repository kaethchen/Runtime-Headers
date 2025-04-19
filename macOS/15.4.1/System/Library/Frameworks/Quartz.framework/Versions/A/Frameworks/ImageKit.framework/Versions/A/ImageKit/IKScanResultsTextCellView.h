@class NSImageView, IKScanInfo, NSTextField, NSProgressIndicator, NSButton;

@interface IKScanResultsTextCellView : NSTableCellView

@property (retain, nonatomic) IKScanInfo *scanInfo;
@property NSButton *findButton;
@property NSProgressIndicator *spinner;
@property NSImageView *documentIcon;
@property NSTextField *documentName;
@property NSButton *documentPageCount;
@property (retain) id representedObject;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)reconnect;
- (void)updateView;
- (void)updateIcon;
- (void)updatePageCount;
- (void)addObservers:(id)a0;
- (void)removeObservers:(id)a0;
- (void)showInFinder:(id)a0;

@end
