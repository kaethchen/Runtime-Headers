@class ImageHopAnimation, NSString, NSImage, NSObject, NSWindow;
@protocol ImageHopAnimationDelegate;

@interface ImageHopAnimationController : NSObject <NSWindowDelegate, NSAnimationDelegate> {
    NSWindow *_windowToAnimate;
    ImageHopAnimation *_animation;
}

@property (readonly) struct CGPoint { double x; double y; } startPoint;
@property (readonly) struct CGPoint { double x; double y; } endPoint;
@property (weak, nonatomic) NSObject<ImageHopAnimationDelegate> *delegate;
@property (retain, nonatomic) NSImage *hopImage;
@property (nonatomic) struct CGSize { double width; double height; } initialImageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultImage;
+ (struct CGSize { double x0; double x1; })defaultInitialImageSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)windowToAnimate;
- (void)startAnimationFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

@end
