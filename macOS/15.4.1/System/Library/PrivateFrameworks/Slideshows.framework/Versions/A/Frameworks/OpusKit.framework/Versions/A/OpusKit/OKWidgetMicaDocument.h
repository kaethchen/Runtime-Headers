@class NSDictionary, CALayer, NSString;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport>

@property (retain, nonatomic) NSDictionary *rootDictionary;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)publishedObjectNames;
- (id)publishedObjectWithName:(id)a0;
- (double)documentHeight;
- (id)settingsForKey:(id)a0;
- (void)applySettings:(id)a0 withResolution:(id)a1;
- (double)documentWidth;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;

@end
