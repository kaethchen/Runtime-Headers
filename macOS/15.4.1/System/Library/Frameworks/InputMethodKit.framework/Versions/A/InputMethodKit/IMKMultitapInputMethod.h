@class IMKKey, IMKKeyboardState, NSString;

@interface IMKMultitapInputMethod : IMKAbstractInputMethod

@property (retain, nonatomic) IMKKey *multitapKey;
@property (retain, nonatomic) IMKKeyboardState *multitapKeyboardState;
@property (retain, nonatomic) NSString *multitapCharacter;
@property (readonly, nonatomic, getter=isMultitapping) BOOL multitapping;

- (void).cxx_destruct;
- (void)_commitMultitap;
- (void)_updateMultitap;
- (void)_resetCommitMultitapDelay;
- (void)_startMultitap:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)handleKeyRelease:(id)a0 whileInKeyboardState:(id)a1;

@end
