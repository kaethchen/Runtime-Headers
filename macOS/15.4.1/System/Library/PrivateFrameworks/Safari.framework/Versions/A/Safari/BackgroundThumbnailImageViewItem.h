@class StartPagePopoverItemView, NSString, NSView, NSProgressIndicator, NSLayoutConstraint, NSButton, NSImageView;

@interface BackgroundThumbnailImageViewItem : NSCollectionViewItem {
    StartPagePopoverItemView *_imageView;
    NSButton *_button;
    NSLayoutConstraint *_buttonXConstraint;
    NSLayoutConstraint *_buttonYConstraint;
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSProgressIndicator *_downloadProgressIndicator;
    NSImageView *_downloadButtonImage;
}

@property (retain, nonatomic) NSView *backgroundView;
@property (nonatomic) long long downloadState;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL canDisplayGeneratedBackgroundImage;

+ (id)_plusImage;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_showOpenPanel;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (id)_builtInImageNameToSimpleName:(id)a0;
- (void)_clearImage;
- (BOOL)_clearImageButtonVisible;
- (void)_configureButton;
- (void)_createDownloadButtonImageViewIfNecessary;
- (void)_showDownloadButtonImage;
- (void)_showDownloadFailedImage;
- (void)_showDownloadProgressIndicator;
- (void)addClearButton;
- (void)addOpenButton;
- (void)forwardSelectionToCollectionView:(id)a0;
- (void)removeOpenButton;
- (void)untoggleButton;
- (void)updateBackgroundImage:(struct CGImage { } *)a0 accessibilityLabel:(id)a1;

@end
