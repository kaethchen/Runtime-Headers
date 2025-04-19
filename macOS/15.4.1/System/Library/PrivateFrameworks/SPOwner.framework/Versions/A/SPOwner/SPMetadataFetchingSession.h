@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPMetadataFetchingXPCProtocol;

@interface SPMetadataFetchingSession : NSObject <SPMetadataFetchingXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPMetadataFetchingXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (id)init;
- (void).cxx_destruct;
- (void)invalidationHandler:(id)a0;
- (void)fetchAccessoryCapabilitiesData:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccessoryCategoryData:(id)a0 completion:(id /* block */)a1;
- (void)fetchBatteryStatusData:(id)a0 completion:(id /* block */)a1;
- (void)fetchBatteryTypeData:(id)a0 completion:(id /* block */)a1;
- (void)fetchFirmwareVersionData:(id)a0 completion:(id /* block */)a1;
- (void)fetchManufacturerNameData:(id)a0 completion:(id /* block */)a1;
- (void)fetchModelColorCodeData:(id)a0 completion:(id /* block */)a1;
- (void)fetchModelNameData:(id)a0 completion:(id /* block */)a1;
- (void)fetchProductData:(id)a0 completion:(id /* block */)a1;
- (void)fetchProtocolVersionData:(id)a0 completion:(id /* block */)a1;
- (void)interruptionHandler:(id)a0;

@end
