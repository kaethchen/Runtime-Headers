@class NSImageView, NSProgressIndicator, NSLayoutConstraint, NSButton;
@protocol ReaderFontTableCellViewDelegate;

@interface ReaderFontTableCellView : NSTableCellView {
    NSButton *_downloadButton;
    NSProgressIndicator *_progressIndicator;
}

@property (weak) NSImageView *checkboxImage;
@property (weak) NSLayoutConstraint *leadingContentConstraint;
@property (weak) NSLayoutConstraint *trailingContentConstraint;
@property (weak) NSLayoutConstraint *checkmarkDistanceToFontNameConstraint;
@property (weak) NSLayoutConstraint *checkmarkHeightConstraint;
@property (nonatomic) long long fontAvailabilityState;
@property (weak) id<ReaderFontTableCellViewDelegate> delegate;

- (void).cxx_destruct;
- (void)_installDownloadButton;
- (void)_installProgressIndicator;
- (void)_startDownloadIfAppropriate;
- (void)setProgressIndicatorProgress:(double)a0;

@end
