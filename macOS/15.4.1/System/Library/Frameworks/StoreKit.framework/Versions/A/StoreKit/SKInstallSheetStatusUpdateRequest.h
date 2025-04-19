@interface SKInstallSheetStatusUpdateRequest : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ completionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)initWithAppBundleId:(id)a0 isInstallSheetOpen:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
