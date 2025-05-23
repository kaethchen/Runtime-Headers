@class NSDictionary, NSString, NSArray;

@interface AKTrustedContactsSyncResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *custodianOperationsByID;
@property (copy, nonatomic) NSDictionary *beneficiaryOperationsByID;
@property (copy, nonatomic) NSString *custodianListVersion;
@property (copy, nonatomic) NSString *beneficiaryListVersion;
@property (copy, nonatomic) NSArray *orphanedCustodianUUIDs;
@property (copy, nonatomic) NSArray *orphanedBeneficiaryUUIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
