@class SKSpriteNode, NSMutableArray;

@interface ETAngerMessage : ETMessage {
    SKSpriteNode *_anger;
    NSMutableArray *_points;
    NSMutableArray *_delays;
}

@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (nonatomic) double duration;

+ (unsigned short)messageType;

- (id)init;
- (void).cxx_destruct;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (void)stopPlaying;
- (double)messageDuration;
- (void)displayInScene:(id)a0;
- (void)_updateCenterFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 inScene:(id)a1;
- (id)messageTypeAsString;
- (void)setNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 atRelativeTime:(double)a1 inScene:(id)a2;

@end
