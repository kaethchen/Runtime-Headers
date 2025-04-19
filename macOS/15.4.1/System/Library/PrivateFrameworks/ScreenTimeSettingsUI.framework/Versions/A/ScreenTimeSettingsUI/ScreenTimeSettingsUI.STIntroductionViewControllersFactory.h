@interface ScreenTimeSettingsUI.STIntroductionViewControllersFactory : NSObject

+ (id)makeOnboardingControllerWithDsid:(id)a0 childAge:(id)a1 childName:(id)a2 updateExistingSettings:(BOOL)a3 isCommunicationSafetyAlreadyEnabled:(BOOL)a4 userURI:(id)a5 restrictionsDataSource:(id)a6 restrictionsToPresetMappingViewModel:(id)a7 introductionModel:(id)a8 completionHandler:(id /* block */)a9;

- (id)init;

@end
