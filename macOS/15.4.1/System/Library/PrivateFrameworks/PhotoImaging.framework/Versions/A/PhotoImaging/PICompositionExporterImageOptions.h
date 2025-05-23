@class NSArray, NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

@property (copy) NUImageExportFormat *imageExportFormat;
@property double JPEGCompressionQuality;
@property (copy) id /* block */ metadataProcessor;
@property BOOL optimizeForSharing;
@property BOOL applyImageOrientationAsMetadata;
@property BOOL optimizeForBackgroundProcessing;
@property BOOL enableHDR;
@property (copy, nonatomic) NSArray *auxiliaryImageTypes;

- (id)init;
- (void).cxx_destruct;
- (id)imageExportFormatForURL:(id)a0 isHDR:(BOOL)a1;

@end
