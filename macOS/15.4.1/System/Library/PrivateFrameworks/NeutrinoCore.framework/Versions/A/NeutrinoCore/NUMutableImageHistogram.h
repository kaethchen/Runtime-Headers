@interface NUMutableImageHistogram : NUImageHistogram

+ (Class)_histogramClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)write:(id /* block */)a0;
- (id)_luminance;
- (id)_blue;
- (id)_green;
- (id)_red;
- (void)smoothWithFunction:(long long)a0 windowSize:(long long)a1 sampleMode:(long long)a2;

@end
