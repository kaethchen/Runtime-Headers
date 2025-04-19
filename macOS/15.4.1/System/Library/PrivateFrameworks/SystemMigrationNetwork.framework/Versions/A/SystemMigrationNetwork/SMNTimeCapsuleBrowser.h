@class NSNetServiceBrowser, NSSet, NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SMNTimeCapsuleBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

@property (copy) id /* block */ capsuleAppearedBlock;
@property (copy) id /* block */ remoteDiskAppearedBlock;
@property (copy) id /* block */ disappearedBlock;
@property (copy) id /* block */ modelIDFoundBlock;
@property (retain) NSNetServiceBrowser *adiskServiceBrowser;
@property (retain) NSSet *btmmDomains;
@property (retain) NSMutableDictionary *serviceToModelIDMap;
@property (retain) NSMutableDictionary *serviceToTxtRecordMap;
@property (retain) NSMutableDictionary *serviceAdditionalInfoToHostnameMap;
@property (retain) NSMutableDictionary *serviceToAdditionalInfoServiceMap;
@property (retain) NSObject<OS_dispatch_queue> *serviceMapQueue;
@property (retain) NSMutableArray *resolvingServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)stop;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)initWithCapsuleAppearedBlock:(id /* block */)a0 remoteDiskAppearedBlock:(id /* block */)a1 modelIDFoundBlock:(id /* block */)a2 andDisappearedBlock:(id /* block */)a3;
- (id)_dictionaryFromAirPortDiskData:(id)a0;

@end
