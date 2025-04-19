@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isPassthrough;
- (id)canonicalIdentifier;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)canonicalLocalePair;
- (id)combinedLocaleIdentifier;
- (BOOL)isBidirectionalEqual:(id)a0;
- (BOOL)isVariantPair;
- (id)oppositeToLocale:(id)a0;
- (id)reversedPair;

@end
