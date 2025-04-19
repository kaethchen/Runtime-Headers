@class NSRulerView, NSImage;
@protocol NSCopying;

@interface NSRulerMarker : NSObject <NSCopying, NSCoding> {
    NSImage *_image;
    struct CGPoint { double x; double y; } _imageOrigin;
    id _representedObject;
    NSRulerView *_ruler;
    double _location;
    struct __rFlags { unsigned char movable : 1; unsigned char removable : 1; unsigned char dragging : 1; unsigned char pinned : 1; unsigned int _reserved : 28; } _rFlags;
}

@property (readonly, weak) NSRulerView *ruler;
@property double markerLocation;
@property (retain) NSImage *image;
@property struct CGPoint { double x0; double x1; } imageOrigin;
@property (getter=isMovable) BOOL movable;
@property (getter=isRemovable) BOOL removable;
@property (readonly, getter=isDragging) BOOL dragging;
@property (retain) id<NSCopying> representedObject;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRectInRuler;
@property (readonly) double thicknessRequiredInRuler;

+ (void)initialize;
+ (id)_numericIndicatorField;
+ (id)_numericIndicatorFormatter;
+ (void)_tabStopContextMenuAction:(id)a0;
+ (id)centerTabMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)decimalTabMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)firstIndentMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)leftIndentMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)leftMarginMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)leftTabMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)rightIndentMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)rightMarginMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)rightTabMarkerWithRulerView:(id)a0 location:(double)a1;
+ (id)tabStopContextMenuForMarker:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })_compositePointInRuler;
- (double)_locationOfOriginPoint:(double)a0;
- (struct CGPoint { double x0; double x1; })_originPointInRuler;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRulerView:(id)a0 markerLocation:(double)a1 image:(id)a2 imageOrigin:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)trackMouse:(id)a0 adding:(BOOL)a1;

@end
