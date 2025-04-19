@class BSMutableIntegerMap, NSMutableSet;

@interface BSKeyedSettings : BSSettings {
    NSMutableSet *_keys;
    BSMutableIntegerMap *_keyMap;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_baseClass;
+ (Class)_mutableClass;

- (id)allKeys;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (BOOL)isKeyedSettings;
- (void)_applyToSettings:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;
- (long long)flagForKey:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)keyForSetting:(unsigned long long)a0;

@end
