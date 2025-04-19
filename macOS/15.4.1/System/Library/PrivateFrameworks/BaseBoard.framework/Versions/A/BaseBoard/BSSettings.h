@class NSString, BSMutableIntegerMap;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_appendObject:(id)a0 toBuilder:(id)a1 forName:(id)a2;
+ (Class)_baseClass;
+ (Class)_mutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSettings:(id)a0;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)flagForSetting:(unsigned long long)a0;
- (BOOL)isKeyedSettings;
- (void)_applyToSettings:(id)a0;
- (BOOL)_isMutable;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)objectForSetting:(unsigned long long)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
