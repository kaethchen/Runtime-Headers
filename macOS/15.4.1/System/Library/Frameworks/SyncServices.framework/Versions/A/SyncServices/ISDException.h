@interface ISDException : NSException {
    int mLogStackTraceMode;
    BOOL mLogReasonOnly;
}

+ (void)initialize;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (void)raise:(id)a0 format:(id)a1;
+ (void)_logStackTraceWithExceptionName:(id)a0 reason:(id)a1;
+ (void)_logStackTraceWithExceptionReason:(id)a0;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3 logReasonOnly:(BOOL)a4;
+ (BOOL)logStackTraceOnException;
+ (void)setLogStackTraceOnException:(BOOL)a0;

- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (void)raise;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 logStackTraceMode:(int)a3 logReasonOnly:(BOOL)a4;
- (int)logStackTraceOnException;
- (void)setLogStackTraceOnException:(int)a0;

@end
