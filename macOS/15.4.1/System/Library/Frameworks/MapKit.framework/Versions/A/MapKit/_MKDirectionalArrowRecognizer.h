@interface _MKDirectionalArrowRecognizer : NSObject {
    id _target;
    SEL _action;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) long long arrows;
@property (readonly, nonatomic) long long lastArrows;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)handleArrowMask:(long long)a0;

@end
