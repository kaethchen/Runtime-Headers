@class AVPlayerLayer;

@interface _AVSimplePlayerLayerView : NSView

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (Class)layerClass;
+ (id)keyPathsForValuesAffectingPlayerLayer;

@end
