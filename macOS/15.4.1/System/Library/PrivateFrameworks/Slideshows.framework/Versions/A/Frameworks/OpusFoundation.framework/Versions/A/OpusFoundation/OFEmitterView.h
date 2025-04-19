@class NSArray, NSString;

@interface OFEmitterView : OFNSView

@property (nonatomic) double birthRate;
@property (nonatomic) NSArray *emitterCells;
@property (nonatomic) double emitterDepth;
@property (nonatomic) NSString *emitterMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } emitterPosition;
@property (nonatomic) NSString *emitterShape;
@property (nonatomic) struct CGSize { double x0; double x1; } emitterSize;
@property (nonatomic) double emitterZPosition;
@property (nonatomic) double lifetime;
@property (nonatomic) NSString *renderMode;
@property (nonatomic) double scale;
@property (nonatomic) unsigned int seed;
@property (nonatomic) double spin;
@property (nonatomic) double velocity;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (id)emitterLayer;

@end
