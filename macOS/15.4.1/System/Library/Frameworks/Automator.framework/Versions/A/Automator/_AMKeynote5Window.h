@class NSString, _AMKeynote5Slideshow;

@interface _AMKeynote5Window : _AMKeynote5Item

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL closeable;
@property (readonly, copy) _AMKeynote5Slideshow *document;
@property (readonly) BOOL floating;
@property long long index;
@property (readonly) BOOL miniaturizable;
@property BOOL miniaturized;
@property (readonly) BOOL modal;
@property (copy) NSString *name;
@property (readonly) BOOL resizable;
@property (readonly) BOOL titled;
@property BOOL visible;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;

- (long long)id;

@end
