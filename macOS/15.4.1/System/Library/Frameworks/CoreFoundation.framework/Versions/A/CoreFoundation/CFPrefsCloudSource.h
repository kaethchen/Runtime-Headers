@interface CFPrefsCloudSource : CFPrefsPlistSource {
    const char *_configPath;
    const char *_storeName;
    BOOL _enabled;
}

- (void)dealloc;
- (BOOL)enabled;
- (id)initWithDomain:(struct __CFString { } *)a0 user:(struct __CFString { } *)a1 byHost:(BOOL)a2 containerPath:(struct __CFString { } *)a3 containingPreferences:(id)a4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (id)createSynchronizeMessage;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setStoreName:(struct __CFString { } *)a0;

@end
