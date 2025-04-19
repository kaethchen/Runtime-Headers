@class NSNumber, INPerson;

@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INPerson *person;
@property (readonly, copy) NSNumber *score;
@property (readonly) long long recommendation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithPerson:(id)a0 recommendation:(long long)a1;
- (id)initWithPerson:(id)a0 score:(id)a1;
- (id)initWithPerson:(id)a0 score:(id)a1 recommendation:(long long)a2;

@end
