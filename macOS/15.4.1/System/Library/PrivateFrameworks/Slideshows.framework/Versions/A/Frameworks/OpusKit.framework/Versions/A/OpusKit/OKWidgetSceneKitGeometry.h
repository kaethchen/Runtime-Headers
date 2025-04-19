@class NSString, NSArray;

@interface OKWidgetSceneKitGeometry : OKWidgetSceneKitNode <OKCollectionProxyDataSource> {
    NSArray *_opusMaterialsArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (void)applyMaterials;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)loadSettings:(id)a0;
- (void)parentLoaded;
- (void)setSettingGeometryName:(id)a0;
- (void)setSettingMaterials:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingGeometryName;
- (id)settingMaterials;
- (id)settingObjectForKey:(id)a0;

@end
