@interface _TUIGeneratorResultAccumulatorPolicy : NSObject

@property (nonatomic) double accumulatorTimeout;

+ (id)defaultPolicy;

- (id)init;

@end
