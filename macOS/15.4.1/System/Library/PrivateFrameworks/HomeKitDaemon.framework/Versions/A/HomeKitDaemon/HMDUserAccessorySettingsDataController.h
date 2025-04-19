@class NSArray, NSUUID, HMCContext;

@interface HMDUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController> {
    NSUUID *_userModelID;
    HMCContext *_context;
}

@property (readonly) BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;

- (void).cxx_destruct;
- (id)_updatedAccessorySetFromAccessoryUUIDs:(id)a0 currentAccessories:(id)a1 error:(id *)a2;
- (void)enableUserListeningHistoryForAccessory:(id)a0;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 activityNotificationsEnabledForPersonalRequests:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handleRemovedAccessoryWithModelID:(id)a0;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)initWithUserModelID:(id)a0 managedObjectContext:(id)a1;

@end
