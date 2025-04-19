@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (BOOL)isValid;
- (void)invalidate;
- (void)schedule;

@end
