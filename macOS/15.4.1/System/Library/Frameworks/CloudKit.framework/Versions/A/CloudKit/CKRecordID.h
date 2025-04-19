@class NSString, CKRecordZoneID, CKRoughlyEquivalentProperties;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKRoughlyEquivalent, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (BOOL)isValidRecordName:(id)a0 outError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (unsigned long long)size;
- (id)initWithRecordName:(id)a0 zoneID:(id)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKPropertiesDescription;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)CKXPCSuitableString;
- (void)_nilOutRecordName;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (long long)compareToRecordID:(id)a0;
- (id)copyWithAnonymousCKUserID:(id)a0;
- (id)initWithRecordName:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (BOOL)isEqualIgnoringAnonymousUserIDsToRecordID:(id)a0;
- (id)sqliteRepresentation;

@end
