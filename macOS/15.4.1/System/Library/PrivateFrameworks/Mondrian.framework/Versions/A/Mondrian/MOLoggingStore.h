@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MOLoggingStore : NSObject {
    NSObject<OS_dispatch_queue> *_logQueue;
    NSURL *_directory;
    NSString *_basename;
    struct __asl_object_s { } *_asl_store;
    int _fd;
    NSObject<OS_dispatch_source> *_fdDeletionWatcher;
}

+ (void)freeASLMessage:(struct __asl_object_s { } *)a0;
+ (struct __asl_object_s { } *)newASLMessageWithDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (id)storeURL;
- (void)_closeLog;
- (void)_openLogIfNeeded;
- (void)logMessageWithPriority:(int)a0 facility:(const char *)a1 function:(const char *)a2 file:(const char *)a3 line:(int)a4 aslmesssage:(struct __asl_object_s { } *)a5 format:(id)a6;
- (void)logMessageWithPriority:(int)a0 facility:(const char *)a1 function:(const char *)a2 file:(const char *)a3 line:(int)a4 aslmesssage:(struct __asl_object_s { } *)a5 message:(id)a6;
- (void)setPath:(id)a0 base:(id)a1;

@end
