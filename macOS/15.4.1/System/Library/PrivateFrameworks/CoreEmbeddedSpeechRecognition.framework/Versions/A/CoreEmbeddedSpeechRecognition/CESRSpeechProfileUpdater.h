@class CESRSpeechProfileSite, CESRSpeechProfileBuilder, CESRSpeechProfileInstance;

@interface CESRSpeechProfileUpdater : NSObject {
    CESRSpeechProfileInstance *_instance;
    CESRSpeechProfileSite *_speechProfileSite;
}

@property (readonly, nonatomic) CESRSpeechProfileBuilder *builder;

+ (unsigned long long)updateModeForSet:(id)a0 speechProfileInstance:(id)a1 isSetNew:(BOOL *)a2;
+ (unsigned long long)updateModeForSets:(id)a0 speechProfileInstance:(id)a1 speechProfileSite:(id)a2 isAnySetNew:(BOOL *)a3;
+ (id)updaterForInstance:(id)a0 atSpeechProfileSite:(id)a1;

- (void).cxx_destruct;
- (BOOL)removeProfile:(id *)a0;
- (void)_endSpeechProfileUpdateSignpost:(unsigned long long)a0 updateResult:(unsigned char)a1 updateType:(unsigned char)a2 categoryCount:(unsigned long long)a3 itemCount:(unsigned long long)a4;
- (BOOL)_errorRequiresCleanRebuild:(id)a0;
- (id)_versionForCategory:(id)a0 error:(id *)a1;
- (id)categoriesToRebuildForAllSets:(id)a0;
- (BOOL)detectCategoriesToRebuild:(id *)a0 error:(id *)a1;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 builder:(id)a2;
- (BOOL)rebuildCategoryGroup:(id)a0 withSets:(id)a1 version:(id)a2 error:(id *)a3;
- (void)refreshRankedItemCaches;

@end
