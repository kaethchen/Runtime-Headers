@class NSString, _INVocabularyValidator, NSObject;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _INVocabularyValidator *_validator;
}

@property (readonly, copy, nonatomic) NSString *baseDirectoryPath;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *appBundlePath;

+ (id)_hashOfAppPath:(id)a0;
+ (id)_customVocabularyDirectory;
+ (id)_globalClassQueue;
+ (void)_iterateVocabularyWithSummary:(id)a0 optionalBlock:(id /* block */)a1;
+ (id)_latestVocabularyStringsAt:(id)a0;
+ (id)appDatastoreDirectoryForAppBundleID:(id)a0 bundlePath:(id)a1;
+ (void)deleteAllUserVocabularyFromAllAppsAsync;
+ (void)enumerateVocabularyUsingBlock:(id /* block */)a0;
+ (id)managerForBundleID:(id)a0 bundlePath:(id)a1;
+ (id)savedCustomVocabularyOverviewDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)_baseDirectoryPathForIntentSlot:(id)a0;
- (id)_documentWithItems:(id)a0 forIntentSlot:(id)a1;
- (id)_validator;
- (void)_writeLatestVocabularyItems:(id)a0 forIntentSlot:(id)a1 completion:(id /* block */)a2;
- (void)checkIfSyncSlot:(id)a0 isAllowedWithCompletion:(id /* block */)a1;
- (id)deleteEverything;
- (id)deleteIntentSlot:(id)a0;
- (id)deleteVocabularyStoreItemAt:(id)a0;
- (id)getPathToLatestVocabulary:(id *)a0 pathDuringReading:(id *)a1 sentVocabulary:(id *)a2 forIntentSlot:(id)a3;
- (id)initWithBaseDirectory:(id)a0 appBundleID:(id)a1 appBundlePath:(id)a2;
- (void)writeLatestVocabularyItems:(id)a0 forIntentSlot:(id)a1 completion:(id /* block */)a2;

@end
