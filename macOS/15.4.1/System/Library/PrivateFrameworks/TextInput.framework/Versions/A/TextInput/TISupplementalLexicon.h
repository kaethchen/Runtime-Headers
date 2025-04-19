@class NSArray;

@interface TISupplementalLexicon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long searchPrefixes;
@property (readonly, nonatomic) unsigned short searchPrefixCharacter;
@property (nonatomic) unsigned long long identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItems:(id)a0;
- (BOOL)isEqualToSupplementalLexicon:(id)a0;
- (id)initWithItems:(id)a0 searchPrefixes:(unsigned long long)a1;

@end
