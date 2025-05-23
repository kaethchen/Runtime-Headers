@class HDDatabaseTransactionContextStatistics;

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) BOOL skipJournalMerge;
@property (nonatomic) BOOL skipTransactionStartTasks;
@property (nonatomic) BOOL requiresNewDatabaseConnection;
@property (nonatomic) BOOL allowsJournalingDuringProtectedRead;
@property (nonatomic) long long journalType;
@property (nonatomic) long long cacheScope;
@property (nonatomic) BOOL requiresWrite;
@property (nonatomic) BOOL requiresProtectedData;
@property (nonatomic) BOOL highPriority;
@property (retain, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWriting;
+ (id)contextForWritingProtectedData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStatistics:(id)a0;
- (void)setHighPriority:(BOOL)a0;
- (void)setRequiresProtectedData:(BOOL)a0;
- (void)setCacheScope:(long long)a0;
- (void)setJournalType:(long long)a0;
- (void)addAccessibilityAssertion:(id)a0;
- (void)addAccessibilityAssertions:(id)a0;
- (id)contextWithAccessibilityAssertion:(id)a0;
- (void)setAllowsJournalingDuringProtectedRead:(BOOL)a0;
- (void)setRequiresNewDatabaseConnection:(BOOL)a0;
- (void)setRequiresWrite:(BOOL)a0;
- (void)setSkipJournalMerge:(BOOL)a0;
- (void)setSkipTransactionStartTasks:(BOOL)a0;

@end
