@class NSString;

@interface PKAccountTransactionSyncReportItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transactionServiceIdentifier;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *altDSID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithTransactionServiceIdentifier:(id)a0 recordName:(id)a1 recordType:(id)a2 zoneName:(id)a3 altDSID:(id)a4;

@end
