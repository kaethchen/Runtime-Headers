@class NSString, CNContact;

@interface _PSContactPrior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) CNContact *contact;
@property (nonatomic) float priorScore;
@property (nonatomic) unsigned int rank;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0 priorScore:(float)a1 rank:(unsigned int)a2 modelName:(id)a3 modelVersion:(id)a4;

@end
