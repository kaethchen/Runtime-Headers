@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {
    NSMutableArray *_priorities;
    NSMutableDictionary *_prioritiesToIndexes;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)contains:(id)a0;
- (BOOL)addPriorities:(id)a0;
- (void)appendRemainingPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (BOOL)containsPriority:(double)a0;
- (long long)indexOfPriority:(double)a0;
- (id)initWithPriorities:(id)a0;
- (void)insertPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (id)nextPriorityFromPriorities:(id)a0 prioritiesToReAdd:(id)a1;
- (double)priorityOfIndex:(unsigned long long)a0;

@end
