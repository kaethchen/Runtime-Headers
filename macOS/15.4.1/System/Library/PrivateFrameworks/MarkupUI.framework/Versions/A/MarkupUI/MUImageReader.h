@interface MUImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;
+ (id)cleanImageMetadataFromData:(id)a0;
+ (BOOL)hasPrivateImageMetadata:(id)a0;
+ (id)imageDescriptionFromSourceContent:(id)a0;

- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider { } *)a0;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider { } *)a0 providerSource:(id)a1 baseWasValid:(BOOL *)a2;
- (id)_readDataFromTagAtPath:(id)a0 inMetadata:(struct CGImageMetadata { } *)a1;
- (BOOL)readAnnotationsFromArchivedModelData:(id)a0 toController:(id)a1;
- (id)readArchivedModelDataFromImageData:(id)a0;
- (id)readArchivedModelDataFromImageURL:(id)a0;
- (id)readBaseImageFromData:(id)a0 baseWasValid:(BOOL *)a1;
- (id)readBaseImageFromImageAtURL:(id)a0 baseWasValid:(BOOL *)a1;

@end
