@interface UIRKeyEvent : UIREvent

- (id)description;
- (id)charactersIgnoringModifiers;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (int)cgKeyCode;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withProcess:(id)a1;

@end
