@class FCCKZoneSchema;

@interface FCCKRecordZoneIDMapping : NSObject

@property (readonly, nonatomic) FCCKZoneSchema *fromZoneSchema;
@property (readonly, nonatomic) FCCKZoneSchema *toZoneSchema;
@property (readonly, nonatomic) BOOL hasChanges;

- (void).cxx_destruct;
- (id)initWithFromZoneSchema:(id)a0 toZoneSchema:(id)a1;

@end
