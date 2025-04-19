@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (readonly, nonatomic) long long pearlState;

- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (id)periocularMatchStateForUser:(unsigned int)a0 error:(id *)a1;
- (id)periocularMatchStateWithError:(id *)a0;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (void)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)setTemplate:(id)a0 forIdentity:(id)a1 error:(id *)a2;
- (id)supportsPeriocularEnrollmentWithError:(id *)a0;

@end
