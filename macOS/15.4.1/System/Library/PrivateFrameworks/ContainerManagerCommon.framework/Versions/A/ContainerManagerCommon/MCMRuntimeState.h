@class MCMTestLocks, NSURL, NSString;

@interface MCMRuntimeState : NSObject <MCMRuntimeState>

@property (readonly, nonatomic) MCMTestLocks *testLocks;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)restore;
- (void)persist;
- (void)_loadAndRestore;
- (void)_accumulateAndPersist;
- (id)_accumulateAsPlist;
- (id)_accumulateTestLocksAsPlistArray;
- (void)_restoreFromPlist:(id)a0;
- (void)_restoreTestLock:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)_restoreTestLocksWithPlistArray:(id)a0;
- (id)_urlForDirectory;

@end
