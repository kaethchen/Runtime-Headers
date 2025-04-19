@class NSString, NSMutableDictionary, NSDictionary, NSArray, NSObject, NSMutableArray;
@protocol OS_nw_browser, OS_dispatch_semaphore;

@interface SSBonjourBrowser : NSObject

@property (retain) NSObject<OS_nw_browser> *browser;
@property (retain) NSMutableDictionary *discoveredServers;
@property (nonatomic) BOOL foundServersUpdated;
@property (nonatomic) BOOL deviceInfoUpdated;
@property (retain) NSString *localComputerName;
@property (retain) NSMutableArray *deviceInfoLookupArray;
@property struct _DNSServiceRef_t { } *sharedDNSRef;
@property (retain) NSObject<OS_dispatch_semaphore> *lookupSemaphore;
@property BOOL keepAliveDeviceInfoThread;
@property (retain) NSMutableArray *internalUpdatedBonjourRecords;
@property (readonly, copy, nonatomic) NSDictionary *foundServers;
@property (retain) NSMutableDictionary *deviceInfo;
@property (readonly, copy) NSArray *updatedBonjourRecords;

+ (id)createBrowseDescriptor;

- (void)dealloc;
- (id)init;
- (void)startBrowsing;
- (void)addedDeviceModel:(id)a0 enclosureIndexColor:(id)a1 enclosureRGBColor:(id)a2 forComputer:(id)a3;
- (void)cancelBrowsing;
- (void)getTXTRecordForBonjourName:(id)a0;
- (void)hostNameForBonjourName:(id)a0 completionHandler:(id /* block */)a1;
- (id)hostNameForBonjourNameSynchronous:(id)a0;
- (id)modelForBonjourName:(id)a0;
- (void)serverAddedWithEndpoint:(id)a0;
- (void)serverRemovedWithEndpoint:(id)a0;
- (void)setupSharedDNSRef;
- (void)startDeviceInfoThread;
- (void)stopDeviceInfoThread;

@end
