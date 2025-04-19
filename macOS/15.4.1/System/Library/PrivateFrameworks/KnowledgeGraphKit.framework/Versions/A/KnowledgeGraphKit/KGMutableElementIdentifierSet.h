@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIdentifier:(unsigned long long)a0;
- (void)removeIdentifier:(unsigned long long)a0;
- (void)removeAllIdentifiers;
- (void)subtractIdentifierSet:(id)a0;
- (void)unionWithIdentifierSet:(id)a0;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;
- (void)intersectWithIdentifierSet:(id)a0;
- (void *)mutableBitmap;

@end
