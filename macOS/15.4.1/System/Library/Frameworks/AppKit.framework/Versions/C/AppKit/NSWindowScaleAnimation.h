@class NSWindow;

@interface NSWindowScaleAnimation : NSAnimation

@property (retain) NSWindow *window;
@property double startScale;
@property double endScale;
@property long long tag;

- (void)dealloc;
- (id)_screen;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;

@end
