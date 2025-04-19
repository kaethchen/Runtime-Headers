@class CESRDictionaryLog, CCSetChangeRegistry, NSLocale;

@interface CESRSpeechProfileInstance : NSObject {
    CESRDictionaryLog *_log;
    int _dataProtectionClass;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) CCSetChangeRegistry *changeRegistry;

+ (id)loadAllInstancesAtSpeechProfileSiteURL:(id)a0 error:(id *)a1;
+ (id)loadInstanceAtSpeechProfileSiteURL:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)loadOrCreateInstanceAtSpeechProfileSiteURL:(id)a0 locale:(id)a1 options:(unsigned char)a2 error:(id *)a3;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned char)options;
- (BOOL)remove:(id *)a0;
- (BOOL)updateOptions:(unsigned char)a0 error:(id *)a1;
- (id)_changeRegistryFilename;
- (BOOL)_updateOptions:(unsigned char)a0 error:(id *)a1;
- (id)_updateVersion:(id)a0 forKeys:(id)a1 logKey:(id)a2;
- (id)initWithSpeechProfileSiteURL:(id)a0 create:(BOOL)a1 locale:(id)a2 options:(unsigned char)a3 error:(id *)a4;
- (BOOL)isEqualToInstance:(id)a0;
- (id)lastCompletedVersionForSpeechCategory:(id)a0;
- (id)lastRegisteredVersionForSpeechCategory:(id)a0;
- (void)recordUpdateCompletedForSpeechCategories:(id)a0 version:(id)a1;
- (void)registerUpdateForSpeechCategories:(id)a0 version:(id)a1;

@end
