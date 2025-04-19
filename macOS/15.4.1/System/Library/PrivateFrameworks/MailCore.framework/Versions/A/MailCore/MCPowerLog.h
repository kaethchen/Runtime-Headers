@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MCPowerLog : NSObject

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logQueue;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (void)logEventWithDictionary:(id)a0;
- (void)_logEventWithDictionary:(id)a0;

@end
