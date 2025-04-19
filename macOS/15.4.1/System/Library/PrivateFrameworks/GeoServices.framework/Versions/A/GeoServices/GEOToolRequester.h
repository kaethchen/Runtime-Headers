@interface GEOToolRequester : NSObject <GEOToolProxy>

+ (id)sharedRequester;

- (void)lockDBs;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)a0;
- (unsigned long long)freePurgableSpace:(unsigned long long)a0 forUrgency:(int)a1;
- (id)getDefault:(id)a0 source:(long long *)a1;
- (void)invalidateTileCache;
- (id)listFilePathsLocal;
- (id)listFilePathsRemote;
- (BOOL)notifyNetworkDefaultsChanged;
- (id)ping;
- (id)pingOverIDS;
- (void)unlockDBs;

@end
