@class NSManagedObjectContext, NSDictionary, NSPersistentHistoryToken;
@protocol PLLibraryScopeChangeTrackerDelegate;

@interface PLLibraryScopeChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSManagedObjectContext *_context;
    NSDictionary *_entityNameToAllowedPropertyDescriptionMap;
}

@property (weak, nonatomic) id<PLLibraryScopeChangeTrackerDelegate> delegate;
@property (readonly) BOOL hasChangeTrackerToken;

- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (id)currentToken;
- (id)initWithManagedObjectContext:(id)a0;
- (id)_transactionIteratorSinceToken:(id)a0;
- (id)_allowedPropertyDescriptionsForEntityName:(id)a0;
- (void)clearToken;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:(id)a0;
- (id)lastKnownTokenFromDisk;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)updateLastKnownTokenToResult:(id)a0;

@end
