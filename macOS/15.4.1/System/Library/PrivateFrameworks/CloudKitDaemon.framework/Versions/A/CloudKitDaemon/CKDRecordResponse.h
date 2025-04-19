@class NSString, CKRecordID, CKRecord;

@interface CKDRecordResponse : NSObject

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) NSString *etag;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithRecordID:(id)a0 record:(id)a1 etag:(id)a2;

@end
