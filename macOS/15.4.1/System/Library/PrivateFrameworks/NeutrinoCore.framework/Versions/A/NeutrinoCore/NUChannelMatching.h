@interface NUChannelMatching : NSObject

@property (class, readonly, nonatomic) NUChannelMatching *primary;

+ (id)channel:(id)a0;
+ (id)media:(long long)a0;
+ (id)name:(id)a0;
+ (id)type:(long long)a0;

- (BOOL)match:(id)a0;

@end
