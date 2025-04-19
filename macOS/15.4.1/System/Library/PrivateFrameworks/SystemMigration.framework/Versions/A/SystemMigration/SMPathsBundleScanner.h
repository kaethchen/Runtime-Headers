@class NSMutableArray, NSMutableDictionary, NSURL, SMPaths, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SMPathsBundleScanner : NSObject

@property (weak) SMPaths *pather;
@property (retain) NSURL *rootURL;
@property (retain) NSMutableDictionary *applicationsBundles;
@property (retain) NSMutableDictionary *sourceApplicationBundles;
@property (retain) NSMutableSet *appStoreBundles;
@property BOOL scanned;
@property (retain) NSObject<OS_dispatch_queue> *scanQueue;
@property (retain) NSMutableArray *decisionLog;

- (void).cxx_destruct;
- (void)addBundlesFromEnumerator:(id)a0 toDictionary:(id)a1 skipAppStoreBundles:(BOOL)a2;
- (long long)compareRemoteBundleVersion:(id)a0 toLocalBundleVersion:(id)a1;
- (id)initForPather:(id)a0 atRoot:(id)a1;
- (void)scanApplications;
- (void)scanLocalApplications;
- (void)scanSourceApplications;
- (BOOL)shouldMigrateApplicationBundle:(id)a0 withVersion:(id)a1 andSourceLocation:(id)a2 presentInLocation:(id *)a3 relocateToLocation:(id *)a4;
- (BOOL)shouldMigrateBundle:(id)a0 withVersion:(id)a1 andSourceLocation:(id)a2 presentInLocation:(id *)a3 relocateToLocation:(id *)a4;

@end
