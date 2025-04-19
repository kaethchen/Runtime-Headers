@class NSString, NSMutableSet;

@interface SCRKeyboardKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSMutableSet *keysWithPressCountGreaterThanOne;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short keyCode;
@property (nonatomic) BOOL didSetKeyCode;
@property (nonatomic) unsigned int eventFlags;
@property (copy, nonatomic) NSString *characters;
@property (copy, nonatomic) NSString *rawCharacters;
@property (nonatomic) unsigned long long pressCount;
@property (nonatomic) BOOL shifted;
@property (nonatomic) BOOL commanded;
@property (nonatomic) BOOL fned;
@property (nonatomic) BOOL function;

+ (void)initializePressCountsCache;
+ (BOOL)isEqualIgnoringCount:(id)a0 object2:(id)a1 ignorePressCount:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)modifierMask;
- (void)_initializeFunctionSet;
- (id)_keyboardPunctuationToLowercaseMapping;
- (id)charactersWithPunctuationConvertedToLowercaseForm;
- (id)exportAsPrefsDictionary;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1 keyCode:(unsigned long long)a2 eventFlags:(unsigned int)a3 isShifted:(BOOL)a4 isCommanded:(BOOL)a5 isFned:(BOOL)a6 pressCount:(unsigned long long)a7;
- (id)initWithFunctionCharacters:(const unsigned short *)a0 length:(unsigned long long)a1 isShifted:(BOOL)a2 isCommanded:(BOOL)a3 isFned:(BOOL)a4 pressCount:(long long)a5;
- (id)initWithPrefsDictionary:(id)a0;
- (id)initWithRegularString:(id)a0 isShifted:(BOOL)a1 isCommanded:(BOOL)a2 isFned:(BOOL)a3 pressCount:(long long)a4;
- (BOOL)isEqualIgnoringCount:(id)a0;
- (long long)modifierMaskForGuide;
- (void)registerPressCount:(unsigned long long)a0;
- (void)setKeyCode:(short)a0 eventFlags:(unsigned int)a1;

@end
