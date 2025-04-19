@class NSString, NSDictionary, NSMutableDictionary, NSNetService;

@interface ICDTCPIPDevice : ICDDevice <NSNetServiceDelegate> {
    NSMutableDictionary *_params;
    NSString *_targetHostname;
    NSString *_bonjourServiceDomain;
    NSNetService *_netService;
    BOOL _resolved;
    BOOL _resolveFailed;
}

@property (readonly) NSString *targetIPAddress;
@property (readonly) unsigned int targetIPPort;
@property (readonly) NSString *bonjourServiceType;
@property (readonly) NSString *bonjourServiceName;
@property (readonly) NSDictionary *bonjourTXTRecord;
@property (readonly) NSString *bonjourDeviceLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)initWithParams:(id)a0;
- (short)openDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
