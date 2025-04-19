@class NSView, NSRegion, _NSDisplayOperation;

@interface _NSViewDrawOperation : NSOperation {
    NSView *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    NSRegion *_region;
    NSRegion *_windowRegion;
    unsigned long long _options;
    _NSDisplayOperation *_owningDisplayOperation;
}

- (void)dealloc;
- (id)view;
- (void)main;
- (id)initWithView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 region:(id)a2 windowRegion:(id)a3 options:(unsigned long long)a4 owningDisplayOperation:(id)a5;

@end
