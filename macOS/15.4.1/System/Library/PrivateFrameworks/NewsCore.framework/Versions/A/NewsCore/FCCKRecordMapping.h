@class FCCKZoneSchema, FCCKRecordSchema, FCCKRecordIDMapping;

@interface FCCKRecordMapping : NSObject

@property (readonly, nonatomic) FCCKZoneSchema *fromZoneSchema;
@property (readonly, nonatomic) FCCKZoneSchema *toZoneSchema;
@property (readonly, nonatomic) FCCKRecordSchema *fromRecordSchema;
@property (readonly, nonatomic) FCCKRecordSchema *toRecordSchema;
@property (readonly, nonatomic) FCCKRecordIDMapping *recordIDMapping;
@property (readonly, nonatomic) BOOL hasChanges;

- (void).cxx_destruct;
- (id)initWithFromZoneSchema:(id)a0 toZoneSchema:(id)a1 fromRecordSchema:(id)a2 toRecordSchema:(id)a3 recordIDMapping:(id)a4;

@end
