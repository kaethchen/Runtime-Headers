@interface NSDeferredPageSpoolingOperation : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) struct CGDisplayList { } *pageDisplayList;
@property (readonly) struct CGContext { } *pageContext;

- (void)dealloc;
- (id)init;
- (void)executeWithContext:(id)a0;

@end
