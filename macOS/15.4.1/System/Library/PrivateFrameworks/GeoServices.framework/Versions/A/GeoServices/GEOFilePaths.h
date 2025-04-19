@class NSString, NSURL, geo_state_capture_handle;

@interface GEOFilePaths : NSObject <GEOPListStateCapturing> {
    geo_state_capture_handle *_stateCaptureHandle;
}

@property (class, readonly) NSString *_internal_homeDirectory;
@property (class, readonly) NSString *_internal_geoServicesCacheDirectoryPath;
@property (class, readonly) NSString *homeDirectory;
@property (class, readonly) NSString *preferencesDirectoryPath;
@property (class, readonly) NSString *geodCacheDirectoryPath;
@property (class, readonly) NSString *geoServicesCacheDirectoryPath;
@property (class, readonly) NSString *requestCountsDBFilePath;
@property (class, readonly) NSString *locationShifterDBFilePath;
@property (class, readonly) NSString *analyticsUploadDirectoryPath;
@property (class, readonly) NSString *mapsSuggestionsCacheDirectoryPath;
@property (class, readonly) NSString *analyticsPipelineFilePath;
@property (class, readonly) NSURL *imageServiceDBFileURL;
@property (class, nonatomic) BOOL allowOverrideByTests;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryRepresentation;
+ (id)urlFor:(unsigned long long)a0;
+ (BOOL)createDirectoryCopyingAttributesFromParent:(id)a0 error:(id *)a1;
+ (id)pathFor:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;

@end
