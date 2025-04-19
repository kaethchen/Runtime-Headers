@interface AXPSignpostSender : NSObject

@property (class, readonly, nonatomic) BOOL signpostsEnabled;

+ (void)_debug_sendSignpostEvent;
+ (void)_debug_sendSignpostEventWithMetadata;
+ (void)_debug_sendSignpostIntervalBegin;
+ (void)_debug_sendSignpostIntervalBeginWithMetadata;

@end
