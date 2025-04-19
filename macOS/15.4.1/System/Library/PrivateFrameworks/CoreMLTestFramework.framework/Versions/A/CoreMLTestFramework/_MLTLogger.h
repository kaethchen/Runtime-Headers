@class NSObject, NSFileHandle;
@protocol OS_os_log;

@interface _MLTLogger : NSObject

@property (retain) NSFileHandle *logFileHandle;
@property BOOL loggingToFile;
@property (retain) NSObject<OS_os_log> *loggingChannel;

+ (id)logger;
+ (void)setSharedInstance:(id)a0;
+ (void)resetObject;
+ (id)logger:(id *)a0;
+ (id)logger:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)init:(id *)a0;
- (id)init:(id)a0 error:(id *)a1;
- (id)initWithLogFileURL:(id)a0 error:(id *)a1;
- (void)log:(id)a0 logLevel:(unsigned long long)a1;

@end
