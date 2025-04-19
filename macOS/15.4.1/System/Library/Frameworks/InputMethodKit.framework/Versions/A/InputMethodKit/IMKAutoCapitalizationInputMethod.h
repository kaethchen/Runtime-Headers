@interface IMKAutoCapitalizationInputMethod : IMKAbstractInputMethod

@property (nonatomic) unsigned int lastAutoCapCharacter;
@property (nonatomic) BOOL previousPressedKeyWasShift;
@property (nonatomic, getter=isShiftLocked) BOOL shiftLocked;

- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end
