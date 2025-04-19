@class NSArray, NSDictionary, WBSPersistentPropertyListStore, NSDate;

@interface WBSPasswordBreachStore : NSObject {
    WBSPersistentPropertyListStore *_store;
}

@property (retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
@property (retain, nonatomic) NSArray *resultRecords;
@property (retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property (nonatomic) unsigned long long rampIdentifier;
@property (retain, nonatomic) NSDate *lastSessionCompletionDate;
@property (retain, nonatomic) NSDictionary *passwordEvaluationResuts;

+ (id)_createPersistentIdentifierCanary;
+ (BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)a0 expectedValue:(id)a1;

- (void).cxx_destruct;
- (id)initWithBackingStoreURL:(id)a0;
- (void)saveAndCloseStoreSynchronously;
- (void)saveStoreSynchronously;

@end
