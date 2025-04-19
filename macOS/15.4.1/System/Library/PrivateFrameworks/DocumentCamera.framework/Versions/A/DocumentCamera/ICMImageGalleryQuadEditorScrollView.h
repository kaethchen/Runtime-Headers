@class NSImage, ICMImageGalleryQuadEditorLayerImageView;
@protocol ICMImageGalleryQuadEditorScrollViewDelegate;

@interface ICMImageGalleryQuadEditorScrollView : NSScrollView

@property (nonatomic) struct CGPoint { double x; double y; } lineDragAdjustmentPoint;
@property (readonly, nonatomic) double mininumMagnification;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) ICMImageGalleryQuadEditorLayerImageView *imageView;
@property (weak, nonatomic) id<ICMImageGalleryQuadEditorScrollViewDelegate> delegate;
@property (readonly, nonatomic) double scaleValueForAspectFit;
@property (nonatomic) BOOL hasDividerLineCursorFrame;
@property (nonatomic) BOOL ignoreScrollWheelEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)setDocumentView:(id)a0;
- (void)setMagnification:(double)a0;
- (void)boundsDidChange:(id)a0;
- (void)setImage:(id)a0 orientation:(long long)a1;

@end
