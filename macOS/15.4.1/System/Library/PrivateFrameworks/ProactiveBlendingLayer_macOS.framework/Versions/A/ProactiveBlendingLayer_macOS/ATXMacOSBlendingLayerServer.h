@class ATXUniversalBlendingLayerServer;

@interface ATXMacOSBlendingLayerServer : NSObject

@property (readonly, nonatomic) ATXUniversalBlendingLayerServer *blendingLayerServer;

+ (id)sharedInstance;
+ (id)layoutSelectorsForConsumerSubTypes;

- (id)init;
- (void).cxx_destruct;
- (void)start;

@end
