@class APUnfairRecursiveLock, NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface APSigningContextStorage : NSObject {
    void *_contextRef;
    NSString *_poolName;
    BOOL _used;
}

@property (class, retain, nonatomic) NSString *launchID;
@property (class, retain, nonatomic) NSMutableDictionary *contextDictionaries;
@property (class, readonly, nonatomic) NSMutableArray *assignedContexts;
@property (class, readonly, nonatomic) APUnfairRecursiveLock *lock;

@property (nonatomic) void *contextRef;
@property (retain, nonatomic) NSString *poolName;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) BOOL stashed;
@property (readonly, nonatomic) NSArray *propertyArray;
@property (nonatomic) BOOL used;

+ (id)bundleIdentifier;
+ (id)retrieveStashedContextsForPool:(id)a0;
+ (id)_contextsForPool:(id)a0;
+ (BOOL)_isContextAssigned:(void *)a0;
+ (id)_retrieveStashedContextsForPool:(id)a0 includeAssigned:(BOOL)a1;
+ (void)_setContextsForPool:(id)a0 contexts:(id)a1;
+ (void)destroyAndClearAllContextsForPool:(id)a0;
+ (void)destroyAndClearAllPreviousLaunchContexts;
+ (void)destroyAndClearAllPreviousLaunchContextsForPool:(id)a0;
+ (id)reconstructFromStorage:(id)a0 contextRef:(id)a1;
+ (void)removeContextForPool:(id)a0 contextIdentifier:(void *)a1;
+ (id)retrieveAvailableStashedContextsForPool:(id)a0;

- (void).cxx_destruct;
- (void)save;
- (void)assign;
- (id)initWithContextRef:(void *)a0 poolName:(id)a1 stashed:(BOOL)a2;
- (void)stashed:(BOOL)a0;

@end
