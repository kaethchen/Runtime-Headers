@class NSData;

@interface HMDeviceSetupSessionExchangeDataRequest : NSObject

@property (readonly, copy, nonatomic) NSData *exchangeData;
@property (readonly, nonatomic) long long qos;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithExchangeData:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

@end
