@interface CNCDChangeHistoryResultCoalescing : NSObject

+ (id)coalesceContactChanges:(id)a0;
+ (id)coalescePreviousChange:(id)a0 withCurrentChange:(id)a1;
+ (id)coalescedContactChangeWithChanges:(id)a0;

@end
