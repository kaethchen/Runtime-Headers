@interface SSKeyboardEvent : SSInputEvent

@property (readonly) unsigned long long keyCode;
@property (readonly) int keyState;

+ (id)keyboardEventWithKeyCode:(unsigned long long)a0 withState:(int)a1 withEvent:(id)a2;

- (id)description;
- (id)initWithKeyCode:(unsigned long long)a0 withState:(int)a1 withEvent:(id)a2;

@end
