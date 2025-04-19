@class NSArray, CAGradientLayer;

@interface SearchUIGradientView : NSView

@property (retain, nonatomic) NSArray *colors;
@property (retain) CAGradientLayer *layer;

+ (Class)layerClass;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlipped;

@end
