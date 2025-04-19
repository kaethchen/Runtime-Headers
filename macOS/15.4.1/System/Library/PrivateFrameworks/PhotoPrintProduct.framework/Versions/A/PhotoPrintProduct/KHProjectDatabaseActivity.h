@class KHProjectBundle, KHProjectBundleDatabaseActivityRecord;

@interface KHProjectDatabaseActivity : NSObject

@property (readonly) KHProjectBundleDatabaseActivityRecord *record;
@property (retain) KHProjectBundle *managingProjectBundle;
@property unsigned long long flags;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithRecord:(id)a0;
- (void)endActivity;

@end
