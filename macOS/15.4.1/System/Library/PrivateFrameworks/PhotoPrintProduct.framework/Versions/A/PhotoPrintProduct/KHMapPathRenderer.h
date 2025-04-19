@class NSString, NSArray, NSMutableDictionary, KHEnvironment, NSLock;

@interface KHMapPathRenderer : NSObject <MapPathRendererProtocol> {
    NSArray *_availableConfigurationIds;
    NSMutableDictionary *_configurationInfoCache;
    KHEnvironment *_environment;
    NSMutableDictionary *_treatmentLayerRendererCache;
    NSLock *_renderLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isThemeIdForTexturesAndShadowsEnabled:(id)a0;
+ (id)mapStyleConfigurationIdForThemeId:(id)a0;
+ (id)themeIdForMapStyleConfigurationId:(id)a0 texturesAndShadowsEnabled:(BOOL)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)flushCaches;
- (id)initWithEnvironment:(id)a0;
- (id)_loadMapConfigurationInfoForId:(id)a0;
- (unsigned long long)_convertMapTextHorizontalAlignment:(unsigned long long)a0;
- (unsigned long long)_convertMapTextVerticalAlignment:(unsigned long long)a0;
- (id)_mapConfigurationInfoForThemeId:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_renderStringIntoContext:(struct CGContext { } *)a0 string:(id)a1 contextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contextRectScale:(double)a3 anchor:(struct CGPoint { double x0; double x1; })a4 horizontalAlignment:(unsigned long long)a5 verticalAlignment:(unsigned long long)a6 textStyle:(id)a7 textColor:(id)a8 shouldDraw:(BOOL)a9;
- (id)_textColorForTextStyleKey:(unsigned long long)a0 themeId:(id)a1;
- (id)_textStyleForTextStyleKey:(unsigned long long)a0 themeId:(id)a1;
- (id)_treatmentForStyleKey:(unsigned long long)a0 themeId:(id)a1 quickRender:(BOOL)a2;
- (id)availableThemeIds;
- (void)renderIntoContext:(struct CGContext { } *)a0 contextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contextRectScale:(double)a2 paths:(id)a3 themeId:(id)a4 styleKey:(unsigned long long)a5 quickRender:(BOOL)a6;
- (void)renderStringIntoContext:(struct CGContext { } *)a0 string:(id)a1 contextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contextRectScale:(double)a3 anchor:(struct CGPoint { double x0; double x1; })a4 horizontalAlignment:(unsigned long long)a5 verticalAlignment:(unsigned long long)a6 themeId:(id)a7 styleKey:(unsigned long long)a8;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBoundsInContext:(struct CGContext { } *)a0 string:(id)a1 contextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contextRectScale:(double)a3 anchor:(struct CGPoint { double x0; double x1; })a4 horizontalAlignment:(unsigned long long)a5 verticalAlignment:(unsigned long long)a6 themeId:(id)a7 styleKey:(unsigned long long)a8;

@end
