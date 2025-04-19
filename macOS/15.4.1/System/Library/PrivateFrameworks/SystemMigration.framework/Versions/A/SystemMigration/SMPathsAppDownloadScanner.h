@class NSSet, NSDictionary, NSMutableDictionary, SMPaths, SMSystem_Daemon, NSObject;
@protocol OS_dispatch_queue;

@interface SMPathsAppDownloadScanner : NSObject

@property (retain) SMPaths *pather;
@property (readonly) SMSystem_Daemon *system;
@property (readonly) NSDictionary *longTermSystemIdentifier;
@property (retain) NSSet *systemAppDownloadBundles;
@property (retain) NSMutableDictionary *userAppDownloadBundles;
@property BOOL scanned;
@property (retain) NSObject<OS_dispatch_queue> *scanQueue;

- (void).cxx_destruct;
- (id)initWithPather:(id)a0 onSystem:(id)a1;
- (void)scanForApplications;
- (id)scanForApplicationsAt:(id)a0 useRelativePaths:(BOOL)a1;

@end
