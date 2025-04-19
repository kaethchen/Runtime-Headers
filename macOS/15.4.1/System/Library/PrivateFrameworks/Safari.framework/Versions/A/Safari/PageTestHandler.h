@interface PageTestHandler : NSObject <WBSPageTestDelegate>

+ (void)restoreSettingsPreviouslyOverriddenByTests;
+ (void)saveSettingsOverriddenByTests;
+ (void)setTestTypeInWebContent:(unsigned long long)a0;

- (void)pageTestControllerTerminateApp:(id)a0;
- (void)pageTestController:(id)a0 navigateAndCaptureFormsMetadataForURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)pageTestController:(id)a0 resizeViewport:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)pageTestControllerInitializeApp:(id)a0 completionHandler:(id /* block */)a1;

@end
