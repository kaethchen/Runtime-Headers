@class PKPassFrontView, PKPassBackView, NSString, NSView, CALayer, NSWindow, PKPass;

@interface PKPassViewController : NSViewController <CAAnimationDelegate> {
    NSView *flipFromView;
    CALayer *flipFromLayer;
    NSView *flipToView;
    CALayer *flipToLayer;
    NSWindow *_flipWindow;
}

@property (retain, nonatomic) PKPass *pass;
@property (readonly) PKPassFrontView *frontView;
@property (readonly) PKPassBackView *backView;
@property (readonly) BOOL isFlipped;
@property BOOL disableActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)passViewController;

@end
