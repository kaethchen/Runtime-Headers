@interface KHFrameAttribute : KHAttribute {
    long long _frameId;
}

- (id)description;
- (long long)frameId;
- (void)setFrameId:(long long)a0;
- (void)cacheFrameId:(long long)a0;

@end
