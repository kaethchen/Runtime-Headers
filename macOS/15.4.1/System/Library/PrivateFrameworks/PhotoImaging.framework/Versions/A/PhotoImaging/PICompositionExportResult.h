@class NSURL, NUImageGeometry, NSString;

@interface PICompositionExportResult : NSObject

@property (retain) NSURL *sidecarDataURL;
@property (retain) NUImageGeometry *geometry;
@property struct { long long width; long long height; } inputSize;
@property (copy) NSString *digest;
@property (retain) NSURL *exportedFileURL;

- (void).cxx_destruct;

@end
