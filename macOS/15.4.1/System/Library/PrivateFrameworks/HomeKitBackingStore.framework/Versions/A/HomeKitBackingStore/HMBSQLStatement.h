@class NSArray, NSString, HMBSQLContext;

@interface HMBSQLStatement : HMFObject <HMFLogging>

@property (class, nonatomic) BOOL explainStatements;

@property (getter=isFinalized) BOOL finalized;
@property (readonly, weak, nonatomic) HMBSQLContext *context;
@property (readonly, nonatomic) struct sqlite3_stmt { } *statement;
@property (readonly, nonatomic) NSArray *queryPlans;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)queryPlansForContext:(id)a0 statement:(id)a1;
+ (struct sqlite3_stmt { } *)sqlStatementForContext:(id)a0 statement:(id)a1;

- (void)dealloc;
- (void)finalize;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithContext:(id)a0 statement:(id)a1;
- (id)initWithContext:(id)a0 statement:(struct sqlite3_stmt { } *)a1 queryPlans:(id)a2;

@end
