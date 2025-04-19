@class NSString;

@interface BSMutableSettings : BSSettings <BSMutableSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySettings:(id)a0;
- (BOOL)_isMutable;
- (void)removeAllSettings;
- (void)setFlag:(long long)a0 forSetting:(unsigned long long)a1;
- (void)setObject:(id)a0 forSetting:(unsigned long long)a1;

@end
