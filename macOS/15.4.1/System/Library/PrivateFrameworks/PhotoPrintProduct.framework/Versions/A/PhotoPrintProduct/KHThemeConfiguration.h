@interface KHThemeConfiguration : KHModel {
    long long _themeId;
    long long _configurationId;
}

+ (id)allConfigurationsForTheme:(id)a0;
+ (id)defaultConfigurationForTheme:(id)a0;

- (void)dealloc;
- (id)configuration;
- (id)theme;
- (long long)configurationId;
- (long long)themeId;
- (void)cacheConfigurationId:(long long)a0;
- (void)cacheThemeId:(long long)a0;
- (void)setConfigurationId:(long long)a0;
- (void)setThemeId:(long long)a0;

@end
