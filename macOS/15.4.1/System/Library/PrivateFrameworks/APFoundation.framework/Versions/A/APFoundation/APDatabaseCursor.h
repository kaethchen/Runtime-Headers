@class APUnfairLock;

@interface APDatabaseCursor : NSObject

@property (nonatomic) struct sqlite3_stmt { } *statement;
@property (nonatomic) int lastStepResult;
@property (retain, nonatomic) APUnfairLock *lock;

- (void).cxx_destruct;
- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 lock:(id)a1;

@end
