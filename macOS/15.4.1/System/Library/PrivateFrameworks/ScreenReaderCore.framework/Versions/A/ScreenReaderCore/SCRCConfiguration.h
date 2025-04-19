@class NSString, NSDictionary;

@interface SCRCConfiguration : SCRCUserDefaultsBase <SCRCDictionarySpecifierFactoryProtocol, SCRCConfigurationSpecifierFactoryProtocol, NSKeyedUnarchiverDelegate> {
    NSDictionary *_dictionary;
    struct __CFDictionary { } *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedConfiguration;
+ (id)configurationValueForClassKey:(id)a0 withSpecifier:(id)a1;
+ (id)immutableConfigDictionaryFromDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)valueForKeyPath:(id)a0;
- (id)_createConfigDictionary;
- (void)loadConfiguration;
- (void)registerFactory:(Class)a0 forKey:(id)a1;
- (id)scrc_dictionaryValueForClassKey:(id)a0 withSpecifier:(id)a1;

@end
