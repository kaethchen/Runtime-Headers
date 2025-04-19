@class NSString;

@interface HDNotificationInstructionEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)databaseTable;
+ (BOOL)attemptProtectedReadTransactionWithUnprotectedFallbackWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateAllNotificationInstructionsWithTransaction:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 ascending:(BOOL)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)enumerateNotificationInstructionsWithClientIdentifier:(id)a0 action:(long long)a1 notExpiredBeforeDate:(id)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)enumerateNotificationInstructionsWithSetCriteriaNotExpiredBeforeDate:(id)a0 transaction:(id)a1 limit:(unsigned long long)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)insertOrIgnoreNotificationInstruction:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)invalidateNotificationInstructionWithMessageIdentifier:(id)a0 modificationDate:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)obliterateNotificationInstructionsWithTransaction:(id)a0 error:(id *)a1;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;


@end
