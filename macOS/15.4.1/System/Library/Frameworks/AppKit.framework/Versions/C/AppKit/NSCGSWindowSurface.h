@class NSCGSWindow;

@interface NSCGSWindowSurface : NSObject

@property (readonly, retain) NSCGSWindow *window;
@property (readonly) unsigned int surfaceID;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (void)synchronize;

- (void)orderIn;
- (void)orderAboveSurface:(id)a0;
- (void)orderAboveWindow;
- (void)orderBelowSurface:(id)a0;
- (void)orderBelowWindow;
- (void)orderOut;

@end
