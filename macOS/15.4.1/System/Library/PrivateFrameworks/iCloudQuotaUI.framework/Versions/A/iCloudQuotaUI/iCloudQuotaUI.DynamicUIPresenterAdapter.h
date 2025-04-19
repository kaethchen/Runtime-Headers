@interface iCloudQuotaUI.DynamicUIPresenterAdapter : NSObject <ICQDynamicUIPresenterDelegate> {
    void /* unknown type, empty encoding */ dynamicUIPresenter;
    void /* unknown type, empty encoding */ appVersion;
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ fallbackToOffers;
    void /* unknown type, empty encoding */ offerBundleId;
}

- (id)init;
- (void).cxx_destruct;
- (void)dynamicUIPresenterDidCancel:(id)a0 error:(id)a1;
- (void)dynamicUIPresenterDidComplete:(id)a0;

@end
