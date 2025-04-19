@class NSError, _TtC14iCloudSettings30ManageStorageAppsListDataModel;

@interface iCloudSettings.ManageStorageAppsListDataController : NSObject {
    void /* unknown type, empty encoding */ networkRequest;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ account;
@property (nonatomic) void /* unknown type, empty encoding */ shouldIgnoreCache;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAppsListDataWithCompletionHandler:(void (^)(_TtC14iCloudSettings30ManageStorageAppsListDataModel *, NSError *))a0;
- (id)initWithAccount:(id)a0 launchedFromRootLevel:(BOOL)a1 shouldIgnoreCache:(BOOL)a2;

@end
