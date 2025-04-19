@interface _NSCustomTextRenderingDisplayLinkInfo : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;

- (id)initWithTimestamp:(double)a0 duration:(double)a1 targetTimestamp:(double)a2;

@end
