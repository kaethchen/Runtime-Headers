@interface NUMutableHistogram : NUHistogram

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)write:(id /* block */)a0;
- (void)increment:(long long)a0;
- (void)observeValue:(double)a0;
- (void)observeValuesInDataSet:(id)a0;
- (void)smoothWithFunction:(long long)a0 windowSize:(long long)a1 sampleMode:(long long)a2;

@end
