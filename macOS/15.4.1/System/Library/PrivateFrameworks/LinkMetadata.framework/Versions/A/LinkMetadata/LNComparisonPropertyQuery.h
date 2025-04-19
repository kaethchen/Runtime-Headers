@class NSString, NSNumber, LNValue;

@interface LNComparisonPropertyQuery : LNPropertyQuery

@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) NSNumber *propertyIndex;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyIndex:(id)a0 value:(id)a1 type:(unsigned long long)a2;
- (id)initWithPropertyIdentifier:(id)a0 value:(id)a1 type:(unsigned long long)a2;

@end
