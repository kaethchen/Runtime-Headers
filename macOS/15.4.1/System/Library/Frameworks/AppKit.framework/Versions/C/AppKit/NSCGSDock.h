@class NSCGSDisplay;

@interface NSCGSDock : NSObject

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned int orientation;
@property (readonly) NSCGSDisplay *display;

+ (id)currentDockForDisplayConfiguration:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(unsigned int)a1 display:(id)a2;
- (id)updatedDockForDisplayConfiguration:(id)a0;

@end
