@class NSObject;
@protocol OS_dispatch_queue;

@interface PICompositionExporter : NSObject {
    NSObject<OS_dispatch_queue> *_sidecarDataExportQueue;
}

+ (id)resetImageProperties:(id)a0 preserveRegions:(BOOL)a1;
+ (BOOL)_lowMemoryModeSupportedForComposition:(id)a0 pixelSize:(struct { long long x0; long long x1; })a1;
+ (id)metadataConverter;
+ (void)setMetadataConverter:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)exportImageToDataWithComposition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)exportVideoToURL:(id)a0 composition:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_exportVideoToURL:(id)a0 composition:(id)a1 options:(id)a2 properties:(id)a3 progress:(id)a4 completion:(id /* block */)a5;
- (id)addImageProperties:(id)a0 composition:(id)a1 options:(id)a2 error:(id *)a3;
- (id)addVideoProperties:(id)a0 composition:(id)a1 options:(id)a2 error:(id *)a3;
- (id)archiveURLForSidecarData:(id)a0;
- (id)exportComposition:(id)a0 options:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)exportImageToURL:(id)a0 composition:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)prepareAuxiliaryImagesFetchProperties:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)prepareImageExportRequest:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)saveSidecarData:(id)a0 error:(out id *)a1;
- (id)variationForFlavor:(id)a0;

@end
