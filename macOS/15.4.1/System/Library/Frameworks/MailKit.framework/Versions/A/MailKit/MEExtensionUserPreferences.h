@class NSMutableDictionary;

@interface MEExtensionUserPreferences : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSMutableDictionary *extensionIDToUserEnabledMap;

+ (id)sharedInstance;
+ (id)log;

- (void).cxx_destruct;
- (id)_serializedData;
- (id)_plistURL;
- (id)_loadUserPreferences;
- (id)_prefsDictionary;
- (void)_savePreferences;
- (BOOL)isExtensionEnabled:(id)a0;
- (void)setExtensionEnabled:(BOOL)a0 forExtensionID:(id)a1;

@end
