@class NSArray, NSString, NSNumber;

@interface AXSSKeyChord : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *_cachedIsFunctionKey;
    NSNumber *_cachedContainsModifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) BOOL isFunctionKeyChord;
@property (readonly, nonatomic) BOOL containsModifier;
@property (readonly, nonatomic) BOOL isTextInputChord;
@property (readonly, nonatomic) BOOL isTextInputTabChord;
@property (readonly, nonatomic) BOOL isArrowKeyChord;
@property (readonly, nonatomic) BOOL isNull;

+ (id)keyChordWithKeys:(id)a0;
+ (id)keyChordWithString:(id)a0;
+ (id)keyFromKeyCode:(unsigned long long)a0 unicodeCharacter:(id)a1;
+ (id)nullKeyChord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_normalizeKeys:(id)a0;
- (id)_displayValueWithSortedModifiers:(id)a0 isUSKeyboard:(BOOL)a1;
- (id)_initWithKeys:(id)a0;
- (id)displayValueWithStyle:(long long)a0;
- (id)displayValueWithStyle:(long long)a0 isUSKeyboard:(BOOL)a1;
- (BOOL)isEqualToKeyChord:(id)a0;

@end
