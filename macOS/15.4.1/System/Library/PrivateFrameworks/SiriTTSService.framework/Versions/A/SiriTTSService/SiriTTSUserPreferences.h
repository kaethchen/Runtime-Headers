@class NSString;

@interface SiriTTSUserPreferences : NSObject

@property (class, nonatomic, readonly) NSString *spokenLanguageChangedNotification;

+ (void)setLogging:(BOOL)a0;
+ (id)defaultOutputLanguageIdentifier;
+ (id)getAvailableLanguageIdentifiers;
+ (BOOL)getLogging;
+ (id)getSpokenLanguageIdentifier;
+ (void)setSpokenLanguageIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
