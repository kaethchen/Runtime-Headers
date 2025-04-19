@class NSString, NSMutableDictionary;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter {
    NSMutableDictionary *_osLogs;
    NSString *_sender;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;

- (void).cxx_destruct;
- (id)initWithSender:(id)a0;
- (void)_logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 subsystem:(id)a1 type:(unsigned int)a2;
- (BOOL)allowsConcurrentAccess;
- (BOOL)formatsMessage;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(char *)a6;
- (BOOL)outputsToDebuggerConsole;

@end
