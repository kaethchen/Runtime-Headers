@class NSString, NSArray, NSMutableDictionary, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface SystemListener : NSObject {
    BOOL _locked_hasUpdatedLocale;
    BOOL _locked_hasUpdatedFirstWeekDay;
    NSLocale *_locked_currentLocale;
    NSString *_locked_currentRegion;
    unsigned long long _locked_currentFirstWeekDay;
    NSArray *_locked_currentPreferredLanguages;
    BOOL _locked_semanticSearchEnabled;
    NSArray *_locked_supportedSemanticLanguages;
    NSMutableDictionary *_locked_currentResources;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _autoUpdatingLocale;
}

@property (nonatomic) BOOL force;

+ (id)defaultListener;
+ (id)defaultListenerWithForceLoading:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentLocale;
- (id)currentRegion;
- (void)updateResources;
- (unsigned long long)currentFirstWeekDay;
- (id)currentPreferredLanguages;
- (BOOL)hasUpdatedFirstWeekDay;
- (BOOL)hasUpdatedLocale;
- (BOOL)hasUpdatedResources;
- (id)initWithForceLoading:(BOOL)a0;
- (void)logTriggerForCodepathID:(id)a0 queryID:(long long)a1;
- (long long)longValueTrialFactorForKey:(id)a0;
- (id)pathsForContentType:(id)a0 locale:(id)a1;
- (BOOL)semanticSearchEnabled;
- (void)setAutoUpdatingLocale:(BOOL)a0;
- (id)supportedSemanticLanguages;
- (void)updateLocale;
- (void)updateLocaleWithLocale:(id)a0 preferredLanguages:(id)a1 force:(BOOL)a2;

@end
