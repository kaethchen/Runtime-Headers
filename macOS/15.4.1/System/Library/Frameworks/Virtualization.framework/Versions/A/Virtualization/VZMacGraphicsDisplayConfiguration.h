@interface VZMacGraphicsDisplayConfiguration : VZGraphicsDisplayConfiguration {
    long long _displayMode;
    long long _connectionType;
}

@property (setter=_setDisplayMode:) long long _displayMode;
@property (setter=_setConnectionType:) long long _connectionType;
@property long long widthInPixels;
@property long long heightInPixels;
@property long long pixelsPerInch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForScreen:(id)a0 sizeInPoints:(struct CGSize { double x0; double x1; })a1;
- (id)initWithWidthInPixels:(long long)a0 heightInPixels:(long long)a1 pixelsPerInch:(long long)a2;

@end
