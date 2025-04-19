@class IMKKey, NSString;

@interface IMKAutoPeriodInputMethod : IMKAbstractInputMethod

@property (retain, nonatomic) IMKKey *previousPressedKey;
@property (nonatomic, getter=isAutoPeriodEnabled) BOOL autoPeriodEnabled;
@property (retain) NSString *replacementString;

- (void).cxx_destruct;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1;

@end
