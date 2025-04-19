@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncContextSyncShim : NSObject <HDCloudSyncContextSyncShimProtocol> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)fetchLocalKeyValueForProtectionCategory:(long long)a0 completion:(id /* block */)a1;
- (void)ingestRemoteDeviceContexts:(id)a0 completion:(id /* block */)a1;
- (void)lookupOrCreateLocalDeviceContextWithCompletion:(id /* block */)a0;
- (void)updateKeyValuePairsForRemoteEntries:(id)a0 deviceContexts:(id)a1 completion:(id /* block */)a2;

@end
