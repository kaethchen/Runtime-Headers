@class NSString, NSDateFormatter;

@interface WDGlobalDiagnosticLogFileManager : DDLogFileManagerDefault {
    NSString *_logFilePrefix;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)createNewLogFile;
- (id)initWithLogsDirectory:(id)a0;
- (BOOL)isLogFile:(id)a0;
- (id)logFilePrefix;

@end
