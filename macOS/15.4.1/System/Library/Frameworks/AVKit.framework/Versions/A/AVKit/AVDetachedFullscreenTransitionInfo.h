@class NSWindow;

@interface AVDetachedFullscreenTransitionInfo : NSObject

@property (readonly, nonatomic) unsigned long long transitionType;
@property (readonly, nonatomic) NSWindow *originalWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalViewVisibleFrame;

+ (id)transitionInfoForImmediateExit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTransitionType:(unsigned long long)a0 originalWindow:(id)a1 originalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 originalViewVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
