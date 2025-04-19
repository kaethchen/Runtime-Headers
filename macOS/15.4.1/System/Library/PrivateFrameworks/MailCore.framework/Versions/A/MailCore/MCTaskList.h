@class NSArray, NSDictionary;
@protocol MCTaskListDelegate;

@interface MCTaskList : NSObject

@property (readonly, copy, nonatomic) NSArray *sortingKeys;
@property (readonly, copy, nonatomic) NSDictionary *listsByKey;
@property (readonly, copy, nonatomic) NSDictionary *comparatorsByKey;
@property (weak, nonatomic) id<MCTaskListDelegate> delegate;
@property (readonly, nonatomic) unsigned long long taskCount;

+ (id /* block */)_newComparatorForKey:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void)enumerateTasksForKey:(id)a0 usingBlock:(id /* block */)a1;
- (id)highestPriorityTaskForKey:(id)a0;
- (void)_extractTask:(id)a0 fromListWithKey:(id)a1;
- (void)_insertTask:(id)a0 intoListWithKey:(id)a1;
- (id)initWithSortingKeys:(id)a0;

@end
