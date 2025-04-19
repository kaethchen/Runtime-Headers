@class NSString, NSDictionary;

@interface _PASSQLTelemetryContext : NSObject {
    struct sqlite3 { } *_dbConnection;
    NSString *_sql;
    NSString *_targetProcess;
    NSString *_sqlEventsLog;
    BOOL _filterPii;
    BOOL _shouldSendTelemetry;
    NSDictionary *_eventToStringMap;
}

@property (copy, nonatomic) id /* block */ authorizerStatusBlock;

- (void).cxx_destruct;
- (id)currentProcessName;
- (id)initWithConnectionAndSettings:(struct sqlite3 { } *)a0 sqlQuery:(id)a1 filterPii:(BOOL)a2 targetProcess:(id)a3;
- (void)createEventLogForQueryOpCode:(int)a0 argumentOneValue:(id)a1 argumentTwoValue:(id)a2;
- (BOOL)isTargetProcess;
- (void)applyCallbackWithCompletion:(id /* block */)a0;
- (id)currentTargetName;
- (id)initWithConnection:(struct sqlite3 { } *)a0 sqlQuery:(id)a1 filterPii:(BOOL)a2;
- (BOOL)isSqlConst;
- (BOOL)isSqlValidLength;
- (void)removeCallback;
- (void)resetLog;
- (void)sendTelemetry:(id)a0;
- (id)sqlEventLogForTelemetry;

@end
