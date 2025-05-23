@class FBSSceneSpecification, FBSDisplayConfiguration, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters {
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (copy, nonatomic, setter=_setSpecification:) FBSSceneSpecification *specification;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)applySettings:(id)a0;
- (void)applyParameters:(id)a0;
- (void)setSettings:(id)a0;
- (void)applyClientSettings:(id)a0;
- (void)setDisplay:(id)a0;
- (void)updateClientSettingsWithBlock:(id /* block */)a0;
- (void)updateSettingsWithBlock:(id /* block */)a0;

@end
