@class SKSpriteNode, NSColor, SKShader;

@interface KissNode : NSObject

@property (nonatomic) BOOL leavesMark;
@property (retain, nonatomic) SKSpriteNode *node;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) SKShader *shader;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double zRotation;

+ (id)kissNodeWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (void)setScale:(double)a0;
- (void)removeFromParent;
- (void)runAction:(id)a0;
- (void)setColorBlendMode:(long long)a0;

@end
