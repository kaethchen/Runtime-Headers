@class NSString, BrowserTabViewItem;

@interface TabSnapshotInformationVendor : NSObject <TabSnapshotVendingInformationProvider> {
    BrowserTabViewItem *_browserTabViewItem;
    long long _purpose;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)decideSnapshotSource;
- (void)generateTabSnapshotWithWidth:(double)a0 completionHandler:(id /* block */)a1;
- (id)initWithTabViewItem:(id)a0 purpose:(long long)a1;
- (BOOL)shouldPersistSnapshot;
- (id)uniqueTabSnapshotKey;

@end
