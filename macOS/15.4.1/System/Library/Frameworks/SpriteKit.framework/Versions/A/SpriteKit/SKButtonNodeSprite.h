@class SKAction, NSObject;
@protocol SKButtonNodeSpriteDelegate;

@interface SKButtonNodeSprite : SKSpriteNode {
    id /* block */ _downBlock;
    id /* block */ _upBlock;
    id /* block */ _upInsideBlock;
    int _touches;
}

@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> *delegate;
@property (retain, nonatomic) SKAction *downAction;
@property (retain, nonatomic) SKAction *upAction;

+ (BOOL)supportsSecureCoding;
+ (id)buttonWithFontNamed:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)onTouchUpInside:(id /* block */)a0;
- (void)onTouchDownInside:(id /* block */)a0;
- (void)onTouchUp:(id /* block */)a0;
- (void)touchBegan:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)touchEnded:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)touchMoved:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;

@end
