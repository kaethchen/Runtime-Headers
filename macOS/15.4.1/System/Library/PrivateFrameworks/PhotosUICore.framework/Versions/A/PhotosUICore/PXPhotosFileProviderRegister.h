@class NSString;

@interface PXPhotosFileProviderRegister : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ fileProviderManager;
    void /* unknown type, empty encoding */ domain;
}

@property (class, nonatomic, readonly) NSString *urlQueryItemUUIDKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemIdentifierCodeKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemLibraryIdentifierKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemItemTypeKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemClientEncodingPolicyKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemDownscalingTargetDimensionKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemIncludeLocationKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemIncludeCaptionKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemThumbnailSizeKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemVideoPresetKey;

+ (BOOL)canRegisterFileRepresentationsFor:(id)a0 contentType:(id)a1 configuration:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)registeredFileRepresentationWithContentType:(id)a0 uuid:(id)a1 identifierCode:(id)a2 libraryIdentifier:(id)a3 itemType:(unsigned long long)a4 encodingPolicy:(long long)a5 hasLimitedVisibility:(BOOL)a6;
- (id)initWithConfiguration:(id)a0 fileProviderManager:(id)a1 domain:(id)a2;
- (id)registerFileRepresentationsWithItemProvider:(id)a0 asset:(id)a1;
- (id)registerFolderRepresentationWithItemProvider:(id)a0 object:(id)a1;
- (id)registeredFileRepresentationsWithAsset:(id)a0;
- (id)registeredFolderRepresentationWithObject:(id)a0;

@end
