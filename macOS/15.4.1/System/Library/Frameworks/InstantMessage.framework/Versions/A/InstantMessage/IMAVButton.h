@interface IMAVButton : IMAVControl

+ (id)playPauseButton;
+ (Class)_auxiliaryClass;
+ (id)backwardButton;
+ (id)forwardButton;
+ (id)muteButton;

- (long long)state;
- (void)setState:(long long)a0;

@end
