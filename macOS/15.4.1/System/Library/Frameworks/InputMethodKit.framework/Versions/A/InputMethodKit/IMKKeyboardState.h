@interface IMKKeyboardState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long keyModifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithKeyModifiers:(unsigned long long)a0;
- (BOOL)isInShortcutState;
- (BOOL)isModifiedBy:(unsigned long long)a0;
- (BOOL)isModifiedByAny:(unsigned long long)a0;
- (BOOL)isModifiedByNoneOrAny:(unsigned long long)a0;
- (id)keyboardStateWithAdditionalModifiers:(unsigned long long)a0;

@end
