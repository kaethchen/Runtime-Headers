@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSDictionary, NSUUID, NSString;
@protocol _NSItemProviderLoading, NSItemProviderDataTransferDelegate;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {
    id /* block */ _previewImageHandler;
    NSMutableDictionary *_metadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *registeredContentTypes;
@property (readonly, copy) NSArray *registeredContentTypesForOpenInPlace;
@property (copy) id /* block */ previewImageHandler;
@property (retain) NSMutableDictionary *_representationByType;
@property (retain) NSMutableOrderedSet *_typeOrder;
@property (retain) NSMutableDictionary *_preferredRepresentationByType;
@property (retain) id<_NSItemProviderLoading> _loadOperator;
@property (copy) NSDictionary *userInfo;
@property (readonly) NSArray *_representations;
@property (readonly) NSUUID *_UUID;
@property (weak) id<NSItemProviderDataTransferDelegate> dataTransferDelegate;
@property (readonly, copy) NSString *_sanitizedSuggestedName;
@property (readonly, copy) NSArray *registeredTypeIdentifiers;
@property (copy) NSString *suggestedName;

- (id)initWithContentsOfURL:(id)a0 contentType:(id)a1 openInPlace:(BOOL)a2 coordinated:(BOOL)a3 visibility:(long long)a4;
- (id)loadDataRepresentationForContentType:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadFileRepresentationForContentType:(id)a0 openInPlace:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)registerDataRepresentationForContentType:(id)a0 visibility:(long long)a1 loadHandler:(id /* block */)a2;
- (void)registerFileRepresentationForContentType:(id)a0 visibility:(long long)a1 openInPlace:(BOOL)a2 loadHandler:(id /* block */)a3;
- (id)registeredContentTypesConformingToContentType:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)_availableTypes;
- (id)representations;
- (void)_addRepresentationType:(id)a0 preferredRepresentation:(long long)a1 visibility:(long long)a2 loader:(id /* block */)a3;
- (id)_availableTypesWithFilterBlock:(id /* block */)a0;
- (void)_addRepresentationType:(id)a0 preferredRepresentation:(long long)a1 loader:(id /* block */)a2;
- (void)_addRepresentationType_v2:(id)a0 preferredRepresentation:(long long)a1 loader:(id /* block */)a2;
- (void)_commonInitGenerateUUID:(BOOL)a0;
- (BOOL)_hasRepresentationConformingToType:(id)a0;
- (BOOL)_hasRepresentationOfType:(id)a0;
- (void)_loadItemOfClass:(Class)a0 forTypeIdentifier:(id)a1 options:(id)a2 coerceForCoding:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_loadItemOfClass:(Class)a0 withLoadHandler:(id /* block */)a1 options:(id)a2 coerceForCoding:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_loadObjectOfClass:(Class)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadPreviewImageOfClass:(Class)a0 options:(id)a1 coerceForCoding:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_metadataValueForKey:(id)a0;
- (id)_objectOfClass:(Class)a0 data:(id)a1 typeIdentifier:(id)a2 error:(id *)a3;
- (id)_readableTypeIdentifiersForItemProviderForClass:(Class)a0;
- (id)_representationConformingToType:(id)a0;
- (id)_representationForType:(id)a0;
- (void)_setItemRepresentation:(id)a0;
- (void)_setMetadataValue:(id)a0 forKey:(id)a1;
- (BOOL)canLoadObjectOfClass:(Class)a0;
- (BOOL)hasItemConformingToTypeIdentifier:(id)a0;
- (BOOL)hasRepresentationConformingToTypeIdentifier:(id)a0 fileOptions:(long long)a1;
- (id)initWithItem:(id)a0 typeIdentifier:(id)a1;
- (id)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadFileRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadItemForTypeIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)loadObjectOfClass:(Class)a0 completionHandler:(id /* block */)a1;
- (void)loadPreviewImageWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)previewImageHandler;
- (void)registerDataRepresentationForTypeIdentifier:(id)a0 visibility:(long long)a1 loadHandler:(id /* block */)a2;
- (void)registerFileRepresentationForTypeIdentifier:(id)a0 fileOptions:(long long)a1 visibility:(long long)a2 loadHandler:(id /* block */)a3;
- (void)registerItemForTypeIdentifier:(id)a0 loadHandler:(id /* block */)a1;
- (void)registerObject:(id)a0 visibility:(long long)a1;
- (void)registerObjectOfClass:(Class)a0 visibility:(long long)a1 loadHandler:(id /* block */)a2;
- (id)registeredTypeIdentifiers;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)a0;
- (void)setPreviewImageHandler:(id /* block */)a0;

@end
