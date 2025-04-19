@class NSMutableDictionary, NSString, NSDictionary, NSNumber;

@interface TypistHWKeyboard : NSObject

@property (nonatomic) const struct UCKeyboardLayout { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; struct UCKeyboardTypeHeader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x4[1]; } *hardwareKeyboard;
@property (nonatomic) unsigned char gestaltKeyboardType;
@property (retain, nonatomic) NSMutableDictionary *characterToKeycodeMap;
@property (nonatomic) unsigned int hidKeyboardType;
@property (nonatomic) unsigned char usagePage;
@property (retain, nonatomic) NSNumber *keyboardCountryCode;
@property (retain, nonatomic) NSNumber *keyboardLanguage;
@property (retain, nonatomic) NSString *keyboardLanguageString;
@property (retain, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) NSString *propertyDictionaryString;
@property (retain, nonatomic) NSDictionary *modifierCharMap;
@property (nonatomic) double typeInterval;
@property (nonatomic) double pressDuration;

+ (BOOL)_attachedKeyboardLayoutMatchesLanguage:(id)a0;
+ (unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)a0;
+ (id)_convertKeyboardLanguageToHIDCountryCode:(long long)a0;
+ (unsigned int)_convertKeyboardLanguageToHIDKeyboardType:(id)a0;
+ (id)attachedKeyboardLanguageIDs;
+ (id)convertHIDCountryCodeToLanguage:(long long)a0;
+ (BOOL)hasAttachedKeyboardWithLanguageID;
+ (id)hidKeyCodeToANSIKeyCode;
+ (id)initWithKeyboardLanguageOfFirstAttachedKeyboard;
+ (id)keyboardLanguageValueMap;
+ (id)keyboardLayoutValueMap;

- (void)dealloc;
- (void).cxx_destruct;
- (void)detach;
- (id)initWithLanguage:(id)a0;
- (void)typeString:(id)a0;
- (id)getPropertyDictionaryString;
- (id)usagePairsForText:(id)a0;
- (unsigned char)_convertHIDKeyboardTypeToEventKBDType;
- (id)_generateKeystrokeStream:(id)a0 appendTypeInterval:(BOOL)a1;
- (id)_getModifierMaskMap;
- (void)_insertCharacterForKeyCode:(unsigned short)a0 logOutput:(id)a1;
- (void)_insertKey:(unsigned short)a0 logOutput:(id)a1;
- (void)_insertStaticKeys;
- (void)_setupCharacterToKeycodeMap;
- (id)_subsequentKeyPressPairForCharacter:(id)a0;
- (id)defaultLanguageLocaleForKeyboardLanguage:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (unsigned int)getHIDKeyboardType;
- (void)pressAndHoldKeys:(id)a0 forDuration:(double)a1 withValidation:(id /* block */)a2 after:(double)a3;
- (void)pressKeycode:(unsigned short)a0;
- (id)pressKeycodes:(id)a0;
- (void)setModifierCharMap;

@end
