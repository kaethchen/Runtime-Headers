@interface IMDPLogsCollector : NSObject

+ (id)sharedInstance;
+ (id)_primaryAccountCountryCode;

- (id)init;
- (BOOL)logPrivatizedImageReceivedEvent:(BOOL)a0;
- (BOOL)logPrivatizedImageSentEvent:(BOOL)a0;
- (BOOL)logPrivatizedUIInteractionEvent:(unsigned long long)a0;

@end
