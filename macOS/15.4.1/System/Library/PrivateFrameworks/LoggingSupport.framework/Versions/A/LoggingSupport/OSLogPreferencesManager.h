@class NSArray, NSString, NSMutableDictionary;

@interface OSLogPreferencesManager : NSObject {
    NSString *_name;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSArray *processes;
@property (readonly, nonatomic) NSArray *subsystems;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)resetAll;
- (id)_levelPrefs;
- (void)resetAllProcesses;
- (void)resetAllSubsystems;

@end
