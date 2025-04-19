@class NSString;

@interface CLKDistribuitedPreferences : CLKPreferences {
    NSString *persistentDomainName;
    unsigned short atomicChangePreferencesCount;
    BOOL disablePersistentDomainDidChangeNotification;
}

@property (retain, nonatomic) NSString *persistentDomainName;
@property (readonly) BOOL isPersistentDomainNameNew;

- (void)dealloc;
- (void)finalize;
- (id)preferences;
- (void)setDateFormat:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_extraDescription;
- (void)_persistentDomainDidChangeNotificationHandler:(id)a0;
- (void)_postPersistentDomainDidChangeNotification;
- (void)_registerForPersistentDomainDidChangeNotification;
- (void)_savePreferencesAndNotify;
- (void)_savePreferencesToPersistentDomain;
- (void)_unregisterForPersistentDomainDidChangeNotification;
- (void)didChangePreferences;
- (id)initWithLocale:(id)a0 persistentDomainName:(id)a1;
- (void)reloadFromPersistentDomain;
- (void)setFlashDateSeparators:(BOOL)a0;
- (void)setIsAnalog:(BOOL)a0;
- (void)willChangePreferences;

@end
