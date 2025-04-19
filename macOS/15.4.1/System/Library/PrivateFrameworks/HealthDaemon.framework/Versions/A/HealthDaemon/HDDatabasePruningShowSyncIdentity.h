@class NSUUID, NSString;

@interface HDDatabasePruningShowSyncIdentity : NSObject

@property (readonly, nonatomic) long long persitentID;
@property (readonly, nonatomic) NSUUID *hardwareIdentifier;
@property (readonly, nonatomic) NSUUID *databaseIdentifier;
@property (readonly, nonatomic) NSString *instanceDiscriminator;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistentID:(long long)a0 hardwareIdentifier:(id)a1 databaseIdentifier:(id)a2 instanceDiscriminator:(id)a3;

@end
