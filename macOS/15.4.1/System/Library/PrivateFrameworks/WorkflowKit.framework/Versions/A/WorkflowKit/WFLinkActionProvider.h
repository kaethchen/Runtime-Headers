@class WFAppIntentsMetadataProvider, INSystemAppMapper, NSObject;
@protocol OS_dispatch_queue;

@interface WFLinkActionProvider : WFActionProvider

@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) INSystemAppMapper *systemAppMapper;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } actionRequestsLock;
@property (readonly, nonatomic) WFAppIntentsMetadataProvider *metadataProvider;

+ (id)sharedProvider;
+ (BOOL)approvedForPublicDrawerToDisplayActionIdentifier:(id)a0;
+ (id)shortcutsPublicActionIdentifierHashes;
+ (BOOL)shouldAuditActionWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithMetadataProvider:(id)a0;
- (id)customIntentMigratedActionIdentifierWithLaunchId:(id)a0 className:(id)a1;
- (BOOL)isDiscontinuedWithAvailability:(id)a0;
- (id)actionMetadataByUpdatingWithEnumAndEntityMetadata:(id)a0 bundleIdentifier:(id)a1;
- (id)appDescriptorForActionRequest:(id)a0 fullyQualifiedIdentifier:(id *)a1 forceLocalActionsOnly:(BOOL)a2;
- (id)availabilityWithAvailabilityAnnotations:(id)a0;
- (id)availableActionIdentifiers;
- (id)createActionsForBundleIdentifier:(id)a0;
- (void)createActionsForRequests:(id)a0 allowsActionInDenyList:(BOOL)a1;
- (void)createActionsForRequests:(id)a0 allowsActionInDenyList:(BOOL)a1 forceLocalActionsOnly:(BOOL)a2;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (id)definitionForMissingActionWithSerializedParameters:(id)a0;
- (id)disabledOnPlatformsWithAvailability:(id)a0;
- (id)getAppSettingActionForRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 localActionsOnly:(BOOL)a2;
- (id)linkActionWithActionRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 forceLocalActionsOnly:(BOOL)a2;
- (id)linkContentItemFilterActionWithActionRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 entityMetadata:(id)a2 queryMetadata:(id)a3;
- (id)linkCurrentPlatformName;
- (id)resolvedActionIdentifiersForActionRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (BOOL)serializedAppIntentDescriptorIsValid:(id)a0;
- (id)settingUpdaterActionForActionRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 localActionsOnly:(BOOL)a2;
- (id)targetedEntityUpdaterActionForRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 localActionsOnly:(BOOL)a2;

@end
