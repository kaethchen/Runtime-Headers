@class NSPersistentContainer, NSManagedObjectContext;

@interface WAAnalyticsAccess : NSObject {
    BOOL readOnly;
}

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundRawAccessMOC;
@property (nonatomic) unsigned long long options;

+ (void)initialize;
+ (id)accessWithPersistentContainer:(id)a0;

- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (BOOL)canWrite;
- (unsigned long long)_countForFetchRequest:(id)a0 error:(id *)a1 onMoc:(id)a2;
- (unsigned long long)_countForFetchRequestWithBlockAndWait:(id)a0 error:(id *)a1 onMoc:(id)a2;
- (id)_performFetch:(id)a0 error:(id *)a1 onMoc:(id)a2;
- (id)_performFetchWithBlockAndWait:(id)a0 error:(id *)a1 onMoc:(id)a2;
- (unsigned long long)countForFetchRequestWithBlockAndWait:(id)a0 error:(id *)a1;
- (unsigned long long)countForFetchRequestWithBlockAndWaitOnBbMoc:(id)a0 error:(id *)a1;
- (id)initWithOptions:(unsigned long long)a0 andContainer:(id)a1;
- (id)mainObjectContext;
- (id)performFetchWithBlockAndWait:(id)a0 error:(id *)a1;
- (id)performFetchWithBlockAndWaitOnBbMoc:(id)a0 error:(id *)a1;
- (void)releaseBackgroundRawAccessMOC;
- (void)resetBackgroundRawAccessMOC;

@end
