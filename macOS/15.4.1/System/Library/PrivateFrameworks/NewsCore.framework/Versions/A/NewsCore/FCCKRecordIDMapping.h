@class FCCKZoneSchema, CKRecordID, NSString;

@interface FCCKRecordIDMapping : NSObject

@property (readonly, nonatomic) FCCKZoneSchema *fromZoneSchema;
@property (readonly, nonatomic) FCCKZoneSchema *toZoneSchema;
@property (readonly, nonatomic) CKRecordID *fromRecordID;
@property (readonly, nonatomic) CKRecordID *toRecordID;
@property (readonly, nonatomic) NSString *fromRecordName;
@property (readonly, nonatomic) NSString *toRecordName;
@property (readonly, nonatomic) BOOL hasChanges;

- (void).cxx_destruct;
- (id)initWithFromZoneSchema:(id)a0 toZoneSchema:(id)a1 fromRecordName:(id)a2 toRecordName:(id)a3;

@end
