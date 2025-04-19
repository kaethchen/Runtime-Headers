@class NSDictionary;

@interface CKDistributedTimestampAttributedVector : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *mutableAttributeToSparseVector;
@property (readonly, copy) NSDictionary *attributeToSparseVector;

+ (void)initialize;
+ (unsigned char)atomStateFromPClockTypeAndAtomState:(int)a0;
+ (id)attributedVectorFromPDistributedTimestamps:(id)a0 error:(id *)a1;
+ (unsigned char)clockTypeFromPClockTypeAndAtomState:(int)a0;
+ (int)pClockTypeAndAtomStateFromClockType:(unsigned char)a0 atomState:(unsigned char)a1;
+ (id)pDistributedTimestampsFromAttributedVector:(id)a0;
+ (id)pVersionVectorFromAttributedVector:(id)a0 siteIdentifier:(id)a1;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__setBackingStateNoCopy:(id)a0;
- (void)_setBackingState:(id)a0;
- (id)allModifiers;
- (id)allSiteIdentifiers;
- (unsigned short)attributeForTimestamp:(id)a0;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)clockVector__winningLWWTimestampForModifier:(id)a0 winningAttribute:(unsigned short *)a1;
- (unsigned char)clockVector_clockTypeForModifier:(id)a0;
- (id)clockVector_clockTypesForAllModifiers;
- (long long)clockVector_compareToVector:(id)a0 withExpansionState:(unsigned char)a1;
- (BOOL)clockVector_hasTimestampsNotInVector:(id)a0 withExpansionState:(unsigned char)a1;
- (BOOL)clockVector_includesTimestamp:(id)a0;
- (unsigned long long)clockVector_timestampCountForAtomState:(unsigned char)a0;
- (id)clockVector_vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0 withExpansionState:(unsigned char)a1;
- (id)clockVector_vectorFilteredByAtomState:(unsigned char)a0;
- (id)clockVector_vectorFilteredByClockType:(unsigned char)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (id)vectorFilteredByAttribute:(unsigned short)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;
- (id)vectorWithAttributeReplacementBlock:(id /* block */)a0;
- (id)vectorWithoutAttributes;

@end
