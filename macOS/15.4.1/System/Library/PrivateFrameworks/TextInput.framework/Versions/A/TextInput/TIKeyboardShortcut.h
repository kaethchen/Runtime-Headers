@class NSString;

@interface TIKeyboardShortcut : NSObject

@property (retain, nonatomic) NSString *keyEquivalent;
@property unsigned long long modifierFlags;
@property (retain, nonatomic) NSString *displayStringOverride;

+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1 withAttributes:(id)a2;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1;
+ (id)findLocalizationForKeyboardShortcut:(id)a0 withModifiers:(unsigned long long)a1 inApplicableOverrides:(id)a2 usingKeyboardType:(unsigned int)a3;
+ (BOOL)isMirroringCandidate:(id)a0;
+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1;
+ (id)localizedKeyboardShortcut:(id)a0 forKeyboardLayout:(id)a1 usingKeyboardType:(unsigned int)a2;
+ (id)shortcutWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1 displayStringOverride:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1;
- (id)initWithKeyEquivalent:(id)a0 modifierFlags:(unsigned long long)a1 displayStringOverride:(id)a2;

@end
