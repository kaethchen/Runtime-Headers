@class NSString, CKRecordID, NSData;

@interface CKPackageReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 signature:(id)a3;

@end
