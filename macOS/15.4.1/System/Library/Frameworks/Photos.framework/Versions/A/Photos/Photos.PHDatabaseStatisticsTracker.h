@class NSArray;

@interface Photos.PHDatabaseStatisticsTracker : NSObject <NSSQLiteDatabaseTraceDelegate> {
    void /* unknown type, empty encoding */ lockedState;
}

@property (nonatomic, readonly) long long currentByteCount;
@property (nonatomic, readonly) NSArray *sqlStatements;

- (id)init;
- (void).cxx_destruct;
- (void)managedObjectContext:(id)a0 didExecuteFetchRequest:(id)a1 withSQLString:(id)a2 bindVariables:(id)a3 rowCount:(long long)a4;
- (void)managedObjectContext:(id)a0 willExecuteFetchRequest:(id)a1;
- (void)addManagedObjectContext:(id)a0;
- (void)disableGatheringSqlStatements;
- (void)enableGatheringSqlStatements;
- (void)removeAllSqlStatements;

@end
