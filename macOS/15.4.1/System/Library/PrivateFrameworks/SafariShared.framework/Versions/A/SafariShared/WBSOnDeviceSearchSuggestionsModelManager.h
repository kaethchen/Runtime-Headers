@class NSMutableDictionary, NSSet, WBSCoalescedAsynchronousWriter;

@interface WBSOnDeviceSearchSuggestionsModelManager : NSObject {
    NSMutableDictionary *_localeIdentifiersToChecksums;
    WBSCoalescedAsynchronousWriter *_asyncWriter;
    NSSet *_supportedLocaleIdentifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _modelDataLock;
}

@property (class, readonly, nonatomic) WBSOnDeviceSearchSuggestionsModelManager *sharedManager;

@property (readonly, nonatomic) BOOL needsSupportedLocaleUpdate;

- (id)init;
- (void).cxx_destruct;
- (void)clearModels;
- (id)_dictionaryToSave;
- (void)_updateModelFileOnDisk;
- (void)addOrUpdateModelForLocale:(id)a0 withChecksum:(id)a1;
- (id)currentChecksumForModelWithLocale:(id)a0;
- (id)fileURLForModelWithLocale:(id)a0;
- (id)fileURLForModelWithLocaleIfDownloaded:(id)a0;
- (BOOL)haveModelForLocale:(id)a0;
- (BOOL)isLocaleSupported:(id)a0;
- (void)updateSupportedModelLocales:(id)a0;

@end
