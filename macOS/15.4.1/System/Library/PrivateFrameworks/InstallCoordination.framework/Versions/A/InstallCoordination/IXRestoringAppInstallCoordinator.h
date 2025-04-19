@class NSString;

@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithUserDataPromise, IXCoordinatorWithRemovabilityState, IXCoordinatorWithTargetDirectory, IXCoordinatorWithGatekeeperOverride>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasUserDataPromise;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
