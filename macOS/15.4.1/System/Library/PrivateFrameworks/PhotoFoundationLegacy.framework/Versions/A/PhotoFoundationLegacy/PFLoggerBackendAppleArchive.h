@class NSDateFormatter, PFAppleArchiveLogger;

@interface PFLoggerBackendAppleArchive : PFLoggerBackendAdapter {
    NSDateFormatter *_dateFormatter;
    PFAppleArchiveLogger *_logger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loggerLock;
}

+ (id)openLoggerAtURL:(id)a0 legacyLogURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (id)initWithLogFileURL:(id)a0 legacyLogURL:(id)a1;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(char *)a6;

@end
