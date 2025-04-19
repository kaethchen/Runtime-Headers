@class NSString;

@interface PKCloudStoreZoneQueryConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSString *altDSID;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemType:(unsigned long long)a0 recordName:(id)a1;
- (id)initWithTransactionSourceIdentifier:(id)a0 accountIdentifier:(id)a1 accountType:(long long)a2 accountEventIdentifier:(id)a3 altDSID:(id)a4 zoneName:(id)a5;
- (id)initWithTransactionSourceIdentifier:(id)a0 accountIdentifier:(id)a1 accountType:(long long)a2 serviceIdentifier:(id)a3 altDSID:(id)a4 zoneName:(id)a5;

@end
