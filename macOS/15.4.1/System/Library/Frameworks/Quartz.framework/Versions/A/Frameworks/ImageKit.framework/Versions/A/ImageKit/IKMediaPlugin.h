@interface IKMediaPlugin : NSObject

+ (void)setup;
+ (id)pluginForType:(id)a0;
+ (void)registerPlugin:(id)a0 forType:(id)a1;

- (BOOL)supportsPlaying;
- (struct CGImage { } *)imageForRepresentationInstance:(id)a0 forCell:(id)a1;
- (id)playerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forRepresentationInstance:(id)a1 forCell:(id)a2;
- (void)startPlayer:(id)a0;
- (void)stopPlayer:(id)a0;

@end
