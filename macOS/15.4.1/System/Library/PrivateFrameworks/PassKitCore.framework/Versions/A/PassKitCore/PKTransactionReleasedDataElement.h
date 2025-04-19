@class NSString;

@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *elementNamespace;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long retentionIntent;
@property (nonatomic) long long retentionPeriod;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToReleasedDataElement:(id)a0;

@end
