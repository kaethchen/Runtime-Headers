@class NSString, NSDateFormatter, PLAppleArchiveLoggerRecord;

@interface PLFileBackedLogger : NSObject {
    NSDateFormatter *_dateFormatter;
    PLAppleArchiveLoggerRecord *_lock_loggerRecord;
    BOOL _lock_closed;
}

@property char loggerType;
@property (retain) NSString *tag;
@property BOOL enableAutoFlush;

+ (id)setupWithLibraryIdentifier:(id)a0 type:(char)a1;
+ (BOOL)_getResourceValue:(id *)a0 key:(id)a1 url:(id)a2 error:(id *)a3;
+ (id)_openLoggerAtURL:(id)a0 logRotate:(BOOL)a1 error:(id *)a2;
+ (id)_removeAndCreateLoggerAtURL:(id)a0 logRotate:(BOOL)a1 error:(id *)a2;
+ (id)_setupWithLibraryIdentifier:(id)a0 type:(char)a1 logURL:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)flush;
- (BOOL)isClosed;
- (void)logWithMessage:(const char *)a0 fromCodeLocation:(struct { char *x0; int x1; })a1 type:(unsigned char)a2;
- (id)_inlock_createLoggerRecordWithLogFileURL:(id)a0 logRotate:(BOOL)a1 didRebuildLogArchive:(BOOL *)a2 error:(id *)a3;
- (void)_inlock_flush;
- (int)fileRefCount;
- (id)initWithLogFileURL:(id)a0 logRotate:(BOOL)a1;

@end
