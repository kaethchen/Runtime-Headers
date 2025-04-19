@class AVDetachedFullscreenTransitionInfo;

@interface AVFullscreenTransitionConfigurationMacHelper : NSObject {
    AVDetachedFullscreenTransitionInfo *_translatedTransitionInfo;
}

@property (readonly, nonatomic) unsigned long long transitionType;
@property (readonly, nonatomic) id originalWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalViewVisibleFrame;
@property (retain, nonatomic) id userInfo;

+ (id)configurationWithTransitionType:(unsigned long long)a0 originalWindow:(id)a1 originalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 originalViewVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (unsigned long long)_detachedTransitionTypeForTransitionType:(unsigned long long)a0;
+ (id)configurationForImmediateExitTransition;
+ (unsigned long long)macHelperTransitionTypeForTransitionType:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)transitionInfo;
- (id)originalNSWindow;
- (id)originalWindowProxy;

@end
