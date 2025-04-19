@class NSColor;

@interface MusicUI.ArtworkView : NSView {
    void /* unknown type, empty encoding */ cachingContext;
    void /* unknown type, empty encoding */ cachingIdentifier;
    void /* unknown type, empty encoding */ cacheLimit;
    void /* unknown type, empty encoding */ imageBackgroundColor;
    void /* unknown type, empty encoding */ foregroundOverlayView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ internalImageCatalog;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ internalVideoCatalog;
    void /* unknown type, empty encoding */ idealImageSize;
    void /* unknown type, empty encoding */ idealVideoSize;
    void /* unknown type, empty encoding */ videoArtworkCropStyle;
    void /* unknown type, empty encoding */ imageViewContentMode;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ cornerTreatment;
    void /* unknown type, empty encoding */ borderTreatment;
    void /* unknown type, empty encoding */ explicitBackgroundColor;
    void /* unknown type, empty encoding */ foregroundOverlayColor;
    void /* unknown type, empty encoding */ isVideoArtworkAllowed;
    void /* unknown type, empty encoding */ requiresContentsAndLayoutUpdateHandler;
    void /* unknown type, empty encoding */ videoLooperDidChangeHandler;
    void /* unknown type, empty encoding */ videoLooperDidFailHandler;
    void /* unknown type, empty encoding */ videoLooperIsPlayingDidChangeHandler;
    void /* unknown type, empty encoding */ imageDidChangeHandler;
    void /* unknown type, empty encoding */ contentModeDidChangeHandler;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ fadeImageView;
    void /* unknown type, empty encoding */ isBackgroundColorConfigured;
    void /* unknown type, empty encoding */ prefersImageArtwork;
    void /* unknown type, empty encoding */ lastProposedAspectRatio;
    void /* unknown type, empty encoding */ appliedContents;
    void /* unknown type, empty encoding */ needsArtworkReload;
    void /* unknown type, empty encoding */ artworkVideoPlayer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic, retain) NSColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
