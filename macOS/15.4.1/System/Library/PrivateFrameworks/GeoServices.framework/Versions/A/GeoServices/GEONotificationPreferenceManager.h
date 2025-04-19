@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;

@end
