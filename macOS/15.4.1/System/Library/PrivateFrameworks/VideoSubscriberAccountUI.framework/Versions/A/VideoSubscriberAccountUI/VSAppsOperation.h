@class VSAccountChannelsCenter, VSAccountChannels, NSArray, VSIdentityProvider, VSFailable, VSApps, NSObject;
@protocol OS_dispatch_group;

@interface VSAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter;
@property (retain, nonatomic) VSAccountChannels *accountChannels;
@property (retain, nonatomic) NSArray *nonChannelApps;
@property (retain, nonatomic) VSFailable *channelAppsFailable;
@property (retain, nonatomic) VSApps *result;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)fetchChannelAppsWithCompletion:(id /* block */)a0;
- (id)createAppsResult;
- (void)filterVisionOSCompatibleApps:(id)a0;
- (id)initWithIdentityProvider:(id)a0;
- (id)initWithIdentityProvider:(id)a0 accountChannels:(id)a1;

@end
