@class NSString, NSObject;
@protocol OS_dispatch_queue, DDLogFormatter;

@interface DDAbstractLogger : NSObject <DDLogger> {
    id<DDLogFormatter> formatter;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (BOOL)isOnGlobalLoggingQueue;
- (BOOL)isOnInternalLoggerQueue;
- (id)logFormatter;
- (id)loggerName;
- (id)loggerQueue;
- (void)setLogFormatter:(id)a0;

@end
