@class NSString;

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance, IXCoordinatorWithRemovabilityState, IXCoordinatorWithPostProcessingPromises, IXCoordinatorWithEssentialAssetPromises, IXCoordinatorWithTargetDirectory, IXCoordinatorWithTargetBundle, IXCoordinatorWithManagedInstallUUID, IXCoordinatorWithGatekeeperOverride>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
