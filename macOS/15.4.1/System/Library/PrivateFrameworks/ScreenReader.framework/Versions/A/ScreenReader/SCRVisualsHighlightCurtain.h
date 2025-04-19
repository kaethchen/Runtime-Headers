@class SCRCUserDefaults, AXVHighlightCurtainView;

@interface SCRVisualsHighlightCurtain : NSObject

@property (retain, nonatomic, setter=_setCurtainView:) AXVHighlightCurtainView *_curtainView;
@property (nonatomic, setter=_setGestureCurtainTransparency:) double _gestureCurtainTransparency;
@property (retain, nonatomic, setter=_setGestureCurtainTransparencyObserver:) id _gestureCurtainTransparencyObserver;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (nonatomic) BOOL curtainEnabled;
@property (nonatomic) BOOL blackCurtainEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nonCoveredRect;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_accessibilityDisplayOptionsDidChange:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (id)_accessibilityBlackColor;
- (void)setGestureCurtainTransparencyValue:(id)a0;

@end
