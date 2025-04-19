@interface NUImageExportFormatHEIF : NUImageExportFormat

@property (nonatomic) long long bitDepth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (BOOL)supportsHDR;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (id)initWithBitDepth:(long long)a0;

@end
