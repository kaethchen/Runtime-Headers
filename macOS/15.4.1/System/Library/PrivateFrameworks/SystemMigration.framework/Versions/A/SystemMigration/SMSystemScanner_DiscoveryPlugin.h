@class NSMutableDictionary, NSString, NSObject, SMSystemScanner;
@protocol OS_dispatch_queue;

@interface SMSystemScanner_DiscoveryPlugin : NSObject

@property (retain) NSObject<OS_dispatch_queue> *systemQueue;
@property (retain) NSMutableDictionary *systemList;
@property (weak) SMSystemScanner *scanner;
@property (readonly) NSString *systemQueueName;
@property (readonly) BOOL requiresSystemRetention;
@property (readonly) unsigned long long scannerState;

- (id)init;
- (void).cxx_destruct;
- (void)startDiscovery;
- (void)stopDiscovery;
- (id)findParentOf:(id)a0;
- (void)performFinalCleanup;
- (void)registerChild:(id)a0 of:(id)a1;
- (void)scanMountedDisk:(id)a0;
- (void)updateLastKnownFinalSelectedSourceDiskDetails:(id)a0 lost:(BOOL)a1 forSystem:(id)a2 wasRegained:(BOOL)a3;

@end
