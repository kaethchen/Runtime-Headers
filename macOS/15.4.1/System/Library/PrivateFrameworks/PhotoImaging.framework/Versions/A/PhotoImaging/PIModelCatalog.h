@class NSString, NSDictionary;

@interface PIModelCatalog : NSObject {
    void /* unknown type, empty encoding */ _cleanupModelBundleURLString;
    void /* unknown type, empty encoding */ _metadataVersionInfo;
}

@property (nonatomic, readonly) NSString *cleanupVersion;
@property (nonatomic, readonly) NSString *inpaintModelVersion;
@property (nonatomic, readonly) NSString *refinementModelVersion;
@property (nonatomic, readonly) NSString *segmentationModelVersion;
@property (nonatomic, copy) NSString *_cleanupModelBundleURLString;
@property (nonatomic, copy) NSDictionary *_metadataVersionInfo;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)cleanupModelBundleURL:(id *)a0;
- (id)inpaintModelURL:(id *)a0;
- (id)refinementModelURL:(id *)a0;
- (id)segmentationModelURL:(id *)a0;

@end
