@class NSData, CKRecordID, CKRecord;

@interface HDCloudSyncRecord : NSObject {
    CKRecord *_record;
}

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) NSData *underlyingMessage;
@property (readonly, nonatomic) long long schemaVersion;
@property (nonatomic) BOOL repaired;
@property (readonly, nonatomic) BOOL unsaved;

+ (id)recordType;
+ (id)fieldsForProtectedSerialization;
+ (id)initWithSerializedRecord:(id)a0 error:(id *)a1;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresEncryptedSchemaVersion;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)validateWithError:(id *)a0;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
