@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
