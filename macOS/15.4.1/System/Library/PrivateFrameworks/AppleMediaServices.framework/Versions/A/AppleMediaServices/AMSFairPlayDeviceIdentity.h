@class NSDictionary, NSError, NSURLRequest, AMSSendableBag;
@protocol AMSFairPlayDeviceIdentityNetworkProviderProtocol;

@interface AMSFairPlayDeviceIdentity : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ cachedSessions;
    void /* unknown type, empty encoding */ persistentSessionCache;
}

@property (class, nonatomic, readonly) AMSFairPlayDeviceIdentity *shared;

- (id)init;
- (void)fpdiLevelFor:(NSURLRequest *)a0 bag:(AMSSendableBag *)a1 buyParams:(NSDictionary *)a2 completionHandler:(void (^)(long long, NSError *))a3;
- (void)headersFor:(NSURLRequest *)a0 bag:(AMSSendableBag *)a1 buyParams:(NSDictionary *)a2 networkProvider:(id<AMSFairPlayDeviceIdentityNetworkProviderProtocol>)a3 completionHandler:(void (^)(NSDictionary *, NSError *))a4;
- (void)reinitializeSessionWithLevel:(long long)a0 completionHandler:(void (^)(void))a1;

@end
