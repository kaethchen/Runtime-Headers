@class NSString, NSDateFormatter;

@interface WDSessionDiagnosticLogFileManager : DDLogFileManagerDefault {
    NSDateFormatter *_dateFormatter;
    NSString *_sessionIdentifier;
}

- (void).cxx_destruct;
- (id)createNewLogFile;
- (BOOL)isLogFile:(id)a0;
- (id)initWithLogsDirectory:(id)a0 relatedSession:(id)a1;
- (id)logFilePrefix;

@end
