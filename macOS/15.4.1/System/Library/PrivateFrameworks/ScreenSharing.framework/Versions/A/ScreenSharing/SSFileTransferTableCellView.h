@class NSTextField, NSTimer, NSProgressIndicator, SSFileTransfer, NSProgress, NSImageView, NSButton, NSLayoutConstraint;
@protocol SSFileTransferTableCellViewDelegate;

@interface SSFileTransferTableCellView : NSTableCellView {
    SSFileTransfer *fileTransfer;
}

@property (retain) NSProgress *progress;
@property (retain) NSTimer *progressUpdateTimer;
@property NSImageView *documentImageView;
@property NSProgressIndicator *progressIndicator;
@property NSTextField *upperTextField;
@property NSTextField *lowerTextField;
@property NSButton *cancelButton;
@property NSButton *revealButton;
@property id<SSFileTransferTableCellViewDelegate> delegate;
@property (retain) SSFileTransfer *fileTransfer;
@property (retain) NSLayoutConstraint *lowerTextBottomConstraint;
@property (retain) NSLayoutConstraint *upperTextTopConstraint;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)update:(id)a0;
- (void)awakeFromNib;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)cancelPressed:(id)a0;
- (void)observe:(id)a0;
- (void)revealPressed:(id)a0;
- (void)unobserve:(id)a0;

@end
