@class NSError, NSHashTable, NSArray, NSPredicate, WFDatabaseResultState, NSObject, NSNumber, WFDatabase;
@protocol OS_dispatch_queue;

@interface WFDatabaseResult : NSObject

@property (readonly, nonatomic) NSArray *staticDescriptors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSNumber *cachedCount;
@property (retain, nonatomic) WFDatabaseResultState *state;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSError *fetchError;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSPredicate *searchPredicate;

+ (id)callbackQueue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)reset;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)unsearchedDescriptorsWithError:(id *)a0;
- (id)initWithStaticDescriptors:(id)a0;
- (void)updateDescriptorsAndNotify:(id)a0 state:(id)a1;

@end
