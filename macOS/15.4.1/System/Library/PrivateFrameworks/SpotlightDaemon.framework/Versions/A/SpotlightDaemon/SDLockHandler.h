@protocol SDLockHandlerDelegate;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
}

+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;
+ (id)sharedLockHandler;

- (void).cxx_destruct;
- (void)start;
- (BOOL)migrationComplete;
- (BOOL)unlockedSinceBoot;
- (BOOL)unlocked;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)cxUnlocked;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;

@end
