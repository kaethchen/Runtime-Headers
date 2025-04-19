@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 documentType:(id)a2 projectExtensionIdentifier:(id)a3;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)a0 error:(id *)a1;
+ (id)validKindsForPersistence;

- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (id)duplicateProjectPreviewImageData:(id)a0 error:(id *)a1;
- (BOOL)setProjectPreviewImageData:(id)a0 error:(id *)a1;
- (id)_previewImageFilename;
- (id)payloadForChangedKeys:(id)a0;
- (id)projectPreviewImageData;
- (BOOL)supportsAssetOrderKeys;

@end
