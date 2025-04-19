@class NSString, NSObject;
@protocol OS_dispatch_queue, LACDTODeviceInfoProvider;

@interface LACDTOFeatureRequirementsDataSource : NSObject <LACDTOFeatureRequirementsDataSource> {
    id<LACDTODeviceInfoProvider> _device;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isPhone;
- (BOOL)hasBiometricEnrollmentsForCurrentUser;
- (void)hasHSA2AccountWithCompletion:(id /* block */)a0;
- (void)hasLocationServicesEnabledWithCompletion:(id /* block */)a0;
- (BOOL)hasPasscodeSetForCurrentUser;
- (id)initWithDevice:(id)a0 replyQueue:(id)a1;

@end
