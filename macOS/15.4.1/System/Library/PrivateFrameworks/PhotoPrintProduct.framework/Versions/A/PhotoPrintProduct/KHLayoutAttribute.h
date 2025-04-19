@interface KHLayoutAttribute : KHAttribute {
    long long _layoutId;
}

- (id)description;
- (long long)layoutId;
- (void)setLayoutId:(long long)a0;
- (void)cacheLayoutId:(long long)a0;

@end
