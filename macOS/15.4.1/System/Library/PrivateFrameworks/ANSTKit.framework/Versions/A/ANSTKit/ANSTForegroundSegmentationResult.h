@interface ANSTForegroundSegmentationResult : ANSTResult

@property (readonly, nonatomic) struct __CVBuffer { } *semanticMap;

+ (id)new;

- (void)dealloc;
- (id)init;
- (id)_init;
- (id)initWithMask:(struct __CVBuffer { } *)a0;

@end
