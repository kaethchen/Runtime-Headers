@class NSImage, NSProgressIndicator;

@interface ILMediaBrowserTableItemCell : ILMediaBrowserTableThumbnailCell {
    NSProgressIndicator *mProgressIndicator;
    id mObserving;
    id mControlView;
}

@property (retain) NSImage *icon;
@property (retain) NSImage *badge;
@property (nonatomic) BOOL showProgress;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImage:(id)a0;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
