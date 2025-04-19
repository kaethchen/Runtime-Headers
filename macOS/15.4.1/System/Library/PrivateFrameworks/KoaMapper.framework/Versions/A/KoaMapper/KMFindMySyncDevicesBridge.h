@class NSString, _TtC9KoaMapper27KMFindMySyncDevicesProvider;

@interface KMFindMySyncDevicesBridge : NSObject <KMProviderDatasetBridge> {
    _TtC9KoaMapper27KMFindMySyncDevicesProvider *_devicesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)initWithDevicesProvider:(id)a0;

@end
