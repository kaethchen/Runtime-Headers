@interface VZVirtioGraphicsScanoutConfiguration : VZGraphicsDisplayConfiguration

@property long long widthInPixels;
@property long long heightInPixels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidthInPixels:(long long)a0 heightInPixels:(long long)a1;

@end
