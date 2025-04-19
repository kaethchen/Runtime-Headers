@class NSString, CKRecordID, NSData, NSDate, SYDKeyID, CKRecord;

@interface SYDKeyValue : NSObject

@property (retain, nonatomic) SYDKeyID *keyID;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSDate *valueModificationDate;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSData *serverSystemFieldsRecordData;
@property (retain, nonatomic) NSString *recordName;
@property (copy, nonatomic) CKRecord *serverSystemFieldsRecord;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (nonatomic) BOOL isNewKeyValue;

+ (void)deleteFilesForAssetsInKeyValueRecord:(id)a0;
+ (id)keyFromKeyValueRecord:(id)a0;
+ (id)keyFromUnencryptedKeyValueRecordName:(id)a0;
+ (BOOL)keyValueRecordHasAssetWithoutFile:(id)a0;
+ (id)recordFieldKeyForValueModificationDateInStoreType:(long long)a0;
+ (id)recordNameForUnencryptedKey:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)markForDeletion;
- (id)initWithKey:(id)a0 storeIdentifier:(id)a1;
- (void)mergeDataFromRecord:(id)a0;
- (id)recordRepresentationForStoreType:(long long)a0;
- (BOOL)setServerSystemFieldsRecordIfNewer:(id)a0;
- (void)setValue:(id)a0 withModificationDate:(id)a1;

@end
