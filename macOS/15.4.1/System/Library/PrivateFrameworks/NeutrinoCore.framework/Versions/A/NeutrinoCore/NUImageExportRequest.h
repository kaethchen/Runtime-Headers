@class NSArray, NUImageExportFormat, NUColorSpace, NSDictionary, NSString;

@interface NUImageExportRequest : NUExportRequest <NUTimeBased>

@property (class, readonly, copy, nonatomic) NSArray *defaultAuxiliaryImageTypes;

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy, nonatomic) NUImageExportFormat *format;
@property (nonatomic) BOOL renderToData;
@property (nonatomic) BOOL renderWithIOSurface;
@property (copy) NSDictionary *imageProperties;
@property (nonatomic) BOOL applyOrientationAsMetadata;
@property (copy, nonatomic) NSArray *auxiliaryImageTypes;
@property (copy, nonatomic) NSDictionary *auxImages;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)initWithComposition:(id)a0 destinationURL:(id)a1;
- (id)initWithComposition:(id)a0 exportFormat:(id)a1;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
