@class NSString, LACBiometryHelper;

@interface LACDomainStateProviderBiometry : NSObject <LACDomainStateProviding> {
    LACBiometryHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithBiometryHelper:(id)a0;

@end
