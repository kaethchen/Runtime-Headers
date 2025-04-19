@interface TIMutableCharacterSetDescription : TICharacterSetDescription

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInString:(id)a0;

@end
