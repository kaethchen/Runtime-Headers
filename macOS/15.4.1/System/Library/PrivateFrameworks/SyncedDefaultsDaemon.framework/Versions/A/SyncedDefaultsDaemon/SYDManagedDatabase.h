@class NSString, NSData, NSSet;

@interface SYDManagedDatabase : NSManagedObject

@property (retain, nonatomic) NSString *acAccountIdentifier;
@property (retain, nonatomic) NSData *syncEngineStateSerialization;
@property (nonatomic) BOOL didMigrateFromPlists;
@property (nonatomic) short failedMigrationCount;
@property (retain, nonatomic) NSSet *stores;
@property (retain, nonatomic) NSData *syncEngineMetadata;

@end
