@class NSMutableDictionary;

@interface IMKKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *primaryCharactersMapping;
@property (readonly, nonatomic) NSMutableDictionary *secondaryCharactersMapping;
@property (readonly, nonatomic) unsigned short code;
@property (readonly, nonatomic) BOOL isAlphabeticKey;
@property (readonly, nonatomic) BOOL isNumericKey;
@property (readonly, nonatomic) BOOL isCharacterKey;
@property (readonly, nonatomic) BOOL isArrow;
@property (readonly, nonatomic) BOOL isDelete;
@property (readonly, nonatomic) BOOL isEnter;
@property (readonly, nonatomic) BOOL isEscape;
@property (readonly, nonatomic) BOOL isShift;
@property (readonly, nonatomic) BOOL isSpace;
@property (readonly, nonatomic) BOOL isTab;

+ (id)keySpace;
+ (id)keyWithKeyCode:(unsigned short)a0;
+ (id)keyDelete;
+ (id)keyEnter;
+ (id)keyTab;
+ (id)keyWithKeyCode:(unsigned short)a0 primaryCharacters:(id)a1 at:(unsigned long long)a2;
+ (id)keyWithKeyCode:(unsigned short)a0 primaryCharactersMapping:(id)a1;
+ (BOOL)modifiers:(unsigned long long)a0 containsAll:(unsigned long long)a1;
+ (BOOL)modifiers:(unsigned long long)a0 containsAny:(unsigned long long)a1;
+ (unsigned long long)modifiersWith:(unsigned long long)a0 removedFrom:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_forwardRotatePrimaryComposedCharactersAtModifiers:(unsigned long long)a0;
- (unsigned int)characterAt:(unsigned long long)a0;
- (id)characters:(long long)a0 at:(unsigned long long)a1;
- (id)charactersAt:(unsigned long long)a0;
- (BOOL)containsPrimaryCharacterIn:(id)a0 at:(unsigned long long)a1;
- (id)initWithKeyCode:(unsigned short)a0 primaryCharacters:(id)a1 at:(unsigned long long)a2;
- (id)initWithKeyCode:(unsigned short)a0 primaryCharactersMapping:(id)a1;
- (BOOL)isShortcutWhenModifiedWith:(unsigned long long)a0;
- (id)keyWithForwardRotatedPrimaryAlphaComposedCharacters;
- (unsigned long long)numberAt:(unsigned long long)a0;
- (id)primaryCharactersAt:(unsigned long long)a0;
- (unsigned long long)primaryComposedCharactersCountAt:(unsigned long long)a0;

@end
