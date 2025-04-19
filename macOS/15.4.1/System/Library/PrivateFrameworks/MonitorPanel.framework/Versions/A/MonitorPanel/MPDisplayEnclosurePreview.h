@class NSImage;

@interface MPDisplayEnclosurePreview : NSObject

@property (readonly, retain) NSImage *image;
@property (readonly) long long size;
@property (readonly) long long orientation;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly) double cornerRadius;

+ (id)previewWithImage:(id)a0 size:(long long)a1 orientation:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 cornerRadius:(double)a4;

- (void)dealloc;
- (id)initWithImage:(id)a0 size:(long long)a1 orientation:(long long)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 cornerRadius:(double)a4;

@end
