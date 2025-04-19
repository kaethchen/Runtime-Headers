@class NSString, NSDateFormatter, NSMutableDictionary;

@interface DispatchQueueLogFormatter : NSObject <DDLogFormatter> {
    NSString *dateFormatString;
    int atomicLoggerCount;
    NSDateFormatter *threadUnsafeDateFormatter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSMutableDictionary *_replacements;
}

@property unsigned long long minQueueLength;
@property unsigned long long maxQueueLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;
- (void)didAddToLogger:(id)a0;
- (id)formatLogMessage:(id)a0;
- (void)willRemoveFromLogger:(id)a0;
- (id)replacementStringForQueueLabel:(id)a0;
- (id)queueThreadLabelForLogMessage:(id)a0;
- (void)setReplacementString:(id)a0 forQueueLabel:(id)a1;

@end
