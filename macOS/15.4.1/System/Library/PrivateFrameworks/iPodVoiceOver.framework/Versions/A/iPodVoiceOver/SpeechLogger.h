@class NSDateFormatter, NSFileHandle;

@interface SpeechLogger : NSObject {
    int _loggingLevel;
    NSFileHandle *_logFile;
    BOOL _loggingEnabled;
    NSDateFormatter *_formatter;
}

+ (id)sharedLoggerWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (void)setLoggingLevel:(int)a0;
- (void)logType:(int)a0 inFunction:(const char *)a1 atLine:(int)a2 withString:(id)a3;
- (int)loggingLevel;
- (void)logType:(int)a0 inFunction:(const char *)a1 atLine:(int)a2 withFormat:(id)a3;
- (BOOL)isLoggingEnabled;
- (void)logType:(int)a0 withString:(id)a1;
- (void)writeLineToLog:(id)a0;
- (id)logStringForType:(int)a0;
- (void)logType:(int)a0 withFormat:(id)a1;

@end
