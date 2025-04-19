@class NSString, NSArray;

@interface PKPayLaterPreliminaryAssessment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long productType;
@property (nonatomic, getter=isReapplication) BOOL reapplication;
@property (copy, nonatomic) NSArray *installmentPlans;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 productType:(unsigned long long)a1;

@end
