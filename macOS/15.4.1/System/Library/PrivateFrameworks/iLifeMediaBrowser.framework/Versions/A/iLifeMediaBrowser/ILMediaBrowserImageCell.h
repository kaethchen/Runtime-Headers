@class NSString, ILMediaBrowserMovieView, NSView, NSTimer, NSAttributedString;

@interface ILMediaBrowserImageCell : NSImageCell {
    ILMediaBrowserMovieView *movieView;
    NSString *moviePath;
    NSString *imagePath;
    NSView *currentControlView;
    NSTimer *durationTimer;
    BOOL mReallyPlaying;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _movieBounds;
    NSString *titleString;
    NSAttributedString *attribTitle;
    BOOL drawTitle;
    BOOL mIsClip;
    BOOL mIsProject;
    long long mDisplayDuration;
    long long mImageIndex;
}

- (void)dealloc;
- (id)init;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (void)_setControlView:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlaying;
- (void)stop:(id)a0;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (void)play:(id)a0;
- (long long)imageIndex;
- (void)setImageIndex:(long long)a0;
- (BOOL)drawsTitle;
- (id)imageBitmapRep:(BOOL)a0;
- (id)_truncateString:(id)a0 toWidth:(double)a1;
- (id)displayedPhoto;
- (BOOL)isClip;
- (BOOL)isProject;
- (id)moviePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })movieRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)normalizeImageSize;
- (void)setDrawsTitle:(BOOL)a0;
- (void)setIsClip:(BOOL)a0;
- (void)setIsProject:(BOOL)a0;
- (void)setMoviePath:(id)a0;

@end
