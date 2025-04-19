@class NSString, NUPixelFormat, NSDictionary;

@interface NUImageExportFormatGeneric : NUImageExportFormat

@property (copy) NSString *fileType;
@property (retain) NUPixelFormat *pixelFormat;
@property (copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFileType:(id)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
