@class NSString, MNObserverHashTable, MNUserOptions;

@interface MNUserOptionsEngine : NSObject {
    MNObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)updateNavigationSessionLanguage:(id)a0;

@end
