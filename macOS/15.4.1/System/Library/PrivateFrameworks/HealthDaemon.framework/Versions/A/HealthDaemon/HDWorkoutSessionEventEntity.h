@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)workoutEventClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
