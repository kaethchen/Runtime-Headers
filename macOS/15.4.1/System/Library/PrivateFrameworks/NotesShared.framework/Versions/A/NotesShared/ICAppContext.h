@class NSManagedObjectContext, ICDeviceManagementRestrictionsManager, ICCloudContext;

@interface ICAppContext : NSObject

@property (nonatomic) unsigned long long contextOptions;
@property (copy, nonatomic) id /* block */ backgroundContextCreator;
@property (readonly, nonatomic) ICCloudContext *cloudContext;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;
@property (readonly, nonatomic) ICDeviceManagementRestrictionsManager *deviceManagementRestrictionsManager;

- (void).cxx_destruct;
- (BOOL)hasContextOptions:(unsigned long long)a0;
- (id)initWithCloudContext:(id)a0 contextOptions:(unsigned long long)a1 viewContext:(id)a2 backgroundContextCreator:(id /* block */)a3 deviceManagementRestrictionsManager:(id)a4;
- (id)makeBackgroundContext;

@end
