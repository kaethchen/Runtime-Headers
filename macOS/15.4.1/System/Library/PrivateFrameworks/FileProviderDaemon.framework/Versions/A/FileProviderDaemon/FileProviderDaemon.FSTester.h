@interface FileProviderDaemon.FSTester : _TtCs12_SwiftObject <FSTesterProtocol> {
    void /* unknown type, empty encoding */ tree;
    void /* unknown type, empty encoding */ tester;
}

- (void)purge:(id /* block */)a0;
- (void)moveItemAtURL:(id)a0 toURL:(id)a1 completion:(id /* block */)a2;
- (void)configureFileTreeWithLabel:(id)a0 atRootURL:(id)a1 wharfURL:(id)a2 bundleBitPackageDetection:(BOOL)a3 completion:(id /* block */)a4;
- (void)createItemOfKind:(long long)a0 parentID:(long long)a1 filename:(id)a2 content:(id)a3 isResurrected:(BOOL)a4 uniqueFPID:(id)a5 completion:(id /* block */)a6;
- (void)deleteItemWithHandle:(id)a0 completion:(id /* block */)a1;
- (void)editItemWithHandle:(id)a0 editKind:(long long)a1 content:(id)a2 completion:(id /* block */)a3;
- (void)flockItemWithHandle:(id)a0 flockFlags:(long long)a1 completion:(id /* block */)a2;
- (void)funlockItemWithHandle:(id)a0 completion:(id /* block */)a1;
- (void)moveItemWithHandle:(id)a0 underParent:(id)a1 filename:(id)a2 replaceTarget:(BOOL)a3 completion:(id /* block */)a4;
- (void)pauseItemSyncWithHandle:(id)a0 completion:(id /* block */)a1;
- (void)removeItemAtURL:(id)a0 completion:(id /* block */)a1;
- (void)resumeItemSyncWithHandle:(id)a0 behavior:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)untrackItemWithHandle:(id)a0 completion:(id /* block */)a1;
- (void)updateMetadataWithHandle:(id)a0 metadata:(id)a1 fields:(long long)a2 completion:(id /* block */)a3;

@end
