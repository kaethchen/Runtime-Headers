@class CALayer, NSString;

@interface FigVideoContainerLayer : FigBaseCALayer {
    CALayer *_videoLayer;
    CALayer *_STSLayer;
}

@property (retain, nonatomic) CALayer *videoLayer;
@property (nonatomic) BOOL shouldResizeVideoLayer;
@property (retain, nonatomic) NSString *STSLabel;
@property (nonatomic, getter=isForScrubbingOnly) BOOL forScrubbingOnly;

+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)actionForKey:(id)a0;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;

@end
