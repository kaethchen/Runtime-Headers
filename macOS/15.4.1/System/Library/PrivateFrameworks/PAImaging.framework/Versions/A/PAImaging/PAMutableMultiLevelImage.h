@interface PAMutableMultiLevelImage : PAMultiLevelImage

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientation:(long long)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)addImage:(id)a0;
- (void)removeAllLevels;
- (void)removeImage:(id)a0;
- (void)removeImageAtLevel:(unsigned long long)a0;
- (void)setDisplayOrientation:(long long)a0;

@end
