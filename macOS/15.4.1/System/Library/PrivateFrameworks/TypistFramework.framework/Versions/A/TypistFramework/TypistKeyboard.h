@class NSString, TypistHWKeyboard, NSNumber, TypistCandidateBar;

@interface TypistKeyboard : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *typeInterval;
@property (copy, nonatomic) NSNumber *touchMajorRadius;
@property (copy, nonatomic) NSString *keyboardID;
@property (copy, nonatomic) NSNumber *pressDuration;
@property (retain, nonatomic) TypistCandidateBar *candidatebar;
@property (retain, nonatomic) TypistHWKeyboard *hardwareKeyboard;

+ (id)keyboardLanguageValueMap;
+ (void)typeStringOnHardwareKeyboard:(id)a0 withLanguage:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)detachHardwareKeyboard;
- (void)typeString:(id)a0;
- (void)typeStringWithHardwareKeyboard:(id)a0;
- (void)typeKeystrokeStream:(id)a0 completion:(id /* block */)a1;
- (void)attachHardwareKeyboard:(id)a0;
- (void)attachHardwareKeyboardWithCountryCode:(id)a0;
- (id)initWithHardwareKeyboard:(id)a0;
- (void)pressAndHoldHardwareKeys:(id)a0 forDuration:(double)a1 withValidation:(id /* block */)a2 validateAfter:(double)a3;
- (void)pressKeycode:(unsigned short)a0;
- (void)tapGlobeKey;
- (void)tapMoreKey;
- (void)toggleCapsLock;
- (void)typeKeystrokeStream:(id)a0;

@end
