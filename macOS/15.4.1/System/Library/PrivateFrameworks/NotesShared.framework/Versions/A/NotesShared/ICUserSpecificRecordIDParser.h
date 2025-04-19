@class NSString, CKRecordID;

@interface ICUserSpecificRecordIDParser : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSString *sharedRecordType;
@property (readonly, nonatomic) CKRecordID *sharedRecordID;

+ (BOOL)isUserSpecificRecordID:(id)a0;
+ (BOOL)isUserSpecificRecordType:(id)a0;
+ (id)sharedRecordTypeForUserSpecificRecordType:(id)a0;
+ (id)userSpecificRecordTypeForSharedRecordType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)initWithRecordName:(id)a0;
- (id)initWithSharedRecordType:(id)a0 sharedRecordID:(id)a1 userRecordName:(id)a2 ownerName:(id)a3;

@end
