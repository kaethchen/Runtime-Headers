@interface PNUtilityTypeClassifier : NSObject

+ (unsigned long long)latestVersion;
+ (BOOL)screenshotInferredInAsset:(id)a0 usingSceneModel:(id)a1;
+ (unsigned long long)utilityTypesDetectedInAsset:(id)a0 usingSceneModel:(id)a1;

- (id)init;

@end
