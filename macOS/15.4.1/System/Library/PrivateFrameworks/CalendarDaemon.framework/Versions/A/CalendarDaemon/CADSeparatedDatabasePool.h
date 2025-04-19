@class NSString, NSMutableArray, CalDatabaseInitializationConfiguration;

@interface CADSeparatedDatabasePool : NSObject

@property (readonly, nonatomic) CalDatabaseInitializationConfiguration *config;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) int databaseID;
@property (nonatomic) unsigned long long lastChangeTimestamp;
@property (readonly, nonatomic) NSMutableArray *connections;

- (void).cxx_destruct;
- (void)_returnConnectionToPool:(id)a0;
- (id)initWithConfig:(id)a0 databaseID:(int)a1;
- (void)purgeConnectionsLastUsedPriorTo:(unsigned long long)a0 stats:(struct { int x0; int x1; unsigned long long x2; } *)a1;

@end
