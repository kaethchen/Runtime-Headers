@class NSString, KHTextStyle;

@interface KHConfigurationTextStyle : KHModel {
    long long _configurationId;
    long long _textStyleId;
    NSString *_textStyleName;
    NSString *_designTag;
    long long _type;
    KHTextStyle *_textStyle;
}

+ (id)textStylesForConfiguration:(id)a0 type:(unsigned long long)a1;

- (void)dealloc;
- (void)setType:(long long)a0;
- (long long)type;
- (id)textStyle;
- (void)cacheDesignTag:(id)a0;
- (long long)configurationId;
- (void)setTextStyleId:(long long)a0;
- (void)cacheConfigurationId:(long long)a0;
- (void)cacheTextStyleId:(long long)a0;
- (void)cacheTextStyleName:(id)a0;
- (void)cacheType:(long long)a0;
- (id)designTag;
- (void)setConfigurationId:(long long)a0;
- (void)setDesignTag:(id)a0;
- (void)setTextStyleName:(id)a0;
- (long long)textStyleId;
- (id)textStyleName;

@end
