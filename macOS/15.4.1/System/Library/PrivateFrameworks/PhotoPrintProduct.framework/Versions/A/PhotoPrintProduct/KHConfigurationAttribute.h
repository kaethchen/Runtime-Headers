@interface KHConfigurationAttribute : KHAttribute {
    long long _configurationId;
}

+ (id)attributeWithKey:(id)a0 forConfigurationId:(id)a1 fromDatabase:(id)a2;

- (long long)configurationId;
- (void)cacheConfigurationId:(long long)a0;
- (void)setConfigurationId:(long long)a0;

@end
