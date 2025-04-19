@interface SMUserConflictResolver : NSObject

+ (id)_findUUIDNotInList:(id)a0 error:(id *)a1;
+ (BOOL)determineAndResolveUUIDUserConflictsForRequest:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 error:(id *)a3;

@end
