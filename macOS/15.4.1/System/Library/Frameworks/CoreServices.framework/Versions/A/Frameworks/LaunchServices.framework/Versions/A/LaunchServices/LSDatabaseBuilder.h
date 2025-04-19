@class NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (void)addPathsForDomain:(unsigned int)a0 toOrderedSet:(id)a1;
+ (id)searchPathsForDomain:(unsigned int)a0;

- (void).cxx_destruct;
- (void)createAndSeedLocalDatabase:(BOOL *)a0;
- (void)findAndRegisterApplicationBundles:(void *)a0;
- (id)initWithIOQueue:(id)a0;
- (void)initialMISyncComplete;
- (void)registerLibraries;
- (void)scanAndRegisterNetworkVolumes:(void *)a0;
- (void)scanAndRegisterRemotePlaceholderApps:(void *)a0;
- (void)scanAndRegisterSpotlightContents:(void *)a0;
- (void)setSeedingComplete:(BOOL)a0;
- (void)syncWithMI:(void *)a0;

@end
