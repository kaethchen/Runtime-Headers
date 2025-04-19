@class NSNumber;

@interface FAFetchScreenTimeSettingsCacheRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)enableSettings:(id *)a0;
- (id)initWithFamilyMemberDSID:(id)a0;

@end
