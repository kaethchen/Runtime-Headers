@class NSUUID, NSString, NSDate, NSNumber;

@interface CCDeviceRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) NSString *idsDeviceId;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) unsigned char recordOptions;
@property (readonly, nonatomic) NSNumber *resourceGeneration;
@property (readonly, nonatomic) NSNumber *attestationGeneration;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToItemRecord:(id)a0;

@end
