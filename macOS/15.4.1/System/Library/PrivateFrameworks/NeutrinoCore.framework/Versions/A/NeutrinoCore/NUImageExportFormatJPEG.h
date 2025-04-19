@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)pixelFormat;
- (id)fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
