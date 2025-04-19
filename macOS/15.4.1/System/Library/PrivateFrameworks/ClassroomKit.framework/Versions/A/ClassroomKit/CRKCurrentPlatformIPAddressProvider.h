@class NSString, NSObject;
@protocol CRKNetworkPathMonitor;

@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>

@property (copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) NSObject<CRKNetworkPathMonitor> *pathMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePathMonitorWithPrimitives:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)currentIPAddress;
- (id)initWithNetworkPrimitives:(id)a0;

@end
