@class NSNetServiceBrowser, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMNSlingShotBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

@property (copy) id /* block */ knownSystemBlock;
@property (copy) id /* block */ newSystemAppearedBlock;
@property (copy) id /* block */ systemDisappearedBlock;
@property (retain) NSNetServiceBrowser *browser;
@property (retain) NSObject<OS_dispatch_queue> *serviceMapQueue;
@property (retain) NSMutableArray *resolvingServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addStringFromTXTDictionary:(id)a0 forKey:(id)a1 toDictionary:(id)a2;
+ (id)decodeSystemDescriptionFromSlingShotRock:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)stop;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)initWithKnownSystemBlock:(id /* block */)a0 newSystemAppearedBlock:(id /* block */)a1 andSystemDisappearedBlock:(id /* block */)a2;
- (id)iconForUTI:(id)a0;

@end
