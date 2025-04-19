@class NSString, NSArray, NSURL, NSMutableDictionary, NSLocale, NSObject, NSTimeZone, NSNumber;
@protocol OS_dispatch_queue;

@interface SKGSystemListener : NSObject {
    BOOL _locked_hasDiskCapacity;
    double _locked_lastDiskFlushDate;
    BOOL _locked_hasUpdatedLocale;
    BOOL _locked_isCJK;
    NSLocale *_locked_currentLocale;
    NSString *_locked_currentLanguage;
    NSString *_locked_currentRegion;
    unsigned long long _locked_currentFirstWeekDay;
    NSTimeZone *_locked_currentTimezone;
    NSArray *_locked_currentPreferredLocales;
    NSArray *_locked_currentPreferredLocaleIdentifiers;
    NSArray *_locked_currentPreferredLanguages;
    BOOL _locked_semanticSearchEnabled;
    BOOL _locked_enableEmbeddingsHigherQoS;
    BOOL _locked_enableV2LanguageID;
    NSArray *_locked_supportedSemanticLanguages;
    NSArray *_locked_doNotUpdateList;
    NSURL *_locked_geoIndexPath;
    NSNumber *_locked_geoIndexVersion;
    NSMutableDictionary *_locked_currentResources;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _autoUpdatingLocale;
}

@property (nonatomic) BOOL force;
@property (readonly, nonatomic) NSLocale *currentLocale;
@property (readonly, nonatomic) NSArray *currentPreferredLocales;
@property (readonly, nonatomic) NSArray *currentPreferredLocaleIdentifiers;
@property (readonly, nonatomic) NSString *currentLanguage;
@property (readonly, nonatomic) NSArray *currentPreferredLanguages;
@property (readonly, nonatomic) NSString *currentRegion;
@property (readonly, nonatomic) BOOL currentLocaleIsCJK;
@property (readonly, nonatomic) NSTimeZone *currentTimezone;
@property (readonly, nonatomic) NSArray *doNotUpdateList;
@property (readonly, nonatomic) NSArray *supportedSemanticLanguages;
@property (readonly, nonatomic) NSURL *geoIndexResourcesURL;
@property (readonly, nonatomic) NSURL *geoPatternsResourcesURL;
@property (readonly, nonatomic) BOOL semanticSearchEnabled;
@property (readonly, nonatomic) BOOL enableEmbeddingsHigherQoS;
@property (readonly, nonatomic) BOOL enableLanguageCheckForEmbedding;
@property (readonly, nonatomic) BOOL enableV2LanguageID;
@property (readonly, nonatomic) BOOL hasDiskCapacity;

+ (id)sharedClientListener;
+ (id)sharedProcessorListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCJK;
- (void)updateResources;
- (unsigned long long)currentFirstWeekDay;
- (BOOL)hasUpdatedLocale;
- (BOOL)hasUpdatedResources;
- (id)pathsForContentType:(id)a0 locale:(id)a1;
- (void)setAutoUpdatingLocale:(BOOL)a0;
- (void)updateLocale;
- (void)updateLocaleWithLocale:(id)a0 preferredLanguages:(id)a1 force:(BOOL)a2;
- (BOOL)parsecIsEnabled;
- (id)initWithPreferredLanguages:(id)a0 locale:(id)a1;
- (id)rootLocale;
- (void)setAutoUpdatingTimezone:(BOOL)a0;
- (void)updateTimezone;

@end
