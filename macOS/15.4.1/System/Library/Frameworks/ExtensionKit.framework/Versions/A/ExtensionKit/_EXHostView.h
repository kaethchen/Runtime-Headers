@class NSView;

@interface _EXHostView : NSView

@property (retain) NSView *embededView;
@property float horizontalContentCompressionResistancePriority;
@property float verticalContentCompressionResistancePriority;

- (id)init;
- (void).cxx_destruct;
- (void)setContentCompressionResistancePriority:(float)a0 forOrientation:(long long)a1;
- (void)embedView:(id)a0;

@end
