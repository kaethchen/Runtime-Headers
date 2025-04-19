@class NSNumber, FAScreentimeSettingsObjectCache;

@interface FAEnableScreenTimeSettingsRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;
@property (readonly) FAScreentimeSettingsObjectCache *screentimeModelCache;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)enableSettings:(id *)a0;
- (id)initWithFamilyMemberDSID:(id)a0 screentimeModelCache:(id)a1;

@end
