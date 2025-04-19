@class AXVRotorWindow, NSString;

@interface SCRVisualsRotorWindow : NSObject

@property (retain, nonatomic, setter=_setRotorWindow:) AXVRotorWindow *_rotorWindow;
@property (copy, nonatomic, setter=_setRotorTitle:) NSString *_rotorTitle;
@property (nonatomic, setter=_setRotorKnobCount:) long long _rotorKnobCount;
@property (nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *rotorTitle;
@property (readonly, nonatomic) long long rotorKnobCount;

- (id)init;
- (void).cxx_destruct;
- (void)setBaseFontSize:(double)a0;
- (void)selectRotorKnobAtIndex:(long long)a0;
- (void)hideRotorWindow;
- (void)showRotorWindow;
- (void)updateRotorWindowWithRotorTitle:(id)a0 rotorKnobCount:(long long)a1;

@end
