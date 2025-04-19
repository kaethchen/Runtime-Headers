@protocol MTLLogState;

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (retain, nonatomic) id<MTLLogState> logState;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)commandQueueDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
