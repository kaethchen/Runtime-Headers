@interface CHProcessHandle : BSProcessHandle

@property (readonly) BOOL hasDataStoreReadOnlyEntitlement;
@property (readonly) BOOL hasDataStoreReadWriteEntitlement;
@property (readonly) BOOL hasDataVaultEntitlement;
@property (readonly) BOOL hasAppProtectionReadEntitlement;
@property (readonly) BOOL hasCloudSyncEntitlement;

+ (id)processHandle;

@end
