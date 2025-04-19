@interface iCloudSettings.ICSAnalyticsController : NSObject {
    void /* unknown type, empty encoding */ dataController;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)sendBackupToggleEventWithActionType:(long long)a0;
- (void)sendToggleEventForDataclassID:(id)a0 actionType:(long long)a1 enabled:(BOOL)a2;

@end
