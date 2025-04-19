@class HMDAssistantWatchAuthenticationDataSource;
@protocol HMDSiriSecureAccessoryAccessControllerDataSource;

@interface HMDSiriSecureAccessoryAccessController : NSObject {
    id<HMDSiriSecureAccessoryAccessControllerDataSource> _dataSource;
    HMDAssistantWatchAuthenticationDataSource *_watchAuthDataSource;
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)initWithDataSource:(id)a0 watchAuthDataSource:(id)a1;
- (void)isUnsecuringSiriActionAllowedWithCompletion:(id /* block */)a0;

@end
