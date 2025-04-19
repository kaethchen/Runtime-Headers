@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)internalRepresentation;
+ (id)codedPropertyKeys;
+ (id)secureCodedJsonTypes;
+ (id)secureCodedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)descriptionSubstitutionMap;
- (void)mergePropertiesFrom:(id)a0;
- (id)serverRepresentation;

@end
