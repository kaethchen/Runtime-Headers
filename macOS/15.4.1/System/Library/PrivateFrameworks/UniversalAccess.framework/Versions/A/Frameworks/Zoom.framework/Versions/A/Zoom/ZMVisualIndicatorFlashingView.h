@class CAAnimationGroup, NSString, CAKeyframeAnimation;

@interface ZMVisualIndicatorFlashingView : NSView <ZMVisualIndicating>

@property (retain, nonatomic) CAKeyframeAnimation *_pulseAnimation;
@property (retain, nonatomic) CAKeyframeAnimation *_colorAnimation;
@property (retain, nonatomic) CAAnimationGroup *_animationGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
