@protocol _EXExtensionSceneFactory;

@interface _EXRunningUIExtension : _EXRunningExtension

@property (retain, nonatomic) id<_EXExtensionSceneFactory> sceneFactory;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
