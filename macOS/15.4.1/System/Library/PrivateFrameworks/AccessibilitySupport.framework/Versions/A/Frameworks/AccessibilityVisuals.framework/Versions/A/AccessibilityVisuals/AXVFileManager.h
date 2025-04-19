@interface AXVFileManager : NSObject

+ (id)sharedManager;

- (id)temporaryDirectoryPath;
- (BOOL)_createTemporarySubDirectory:(id)a0;
- (id)_saveDirectoryForImageWithFileName:(id)a0;
- (id)saveImage:(id)a0 fileName:(id)a1;
- (id)saveImageRepresentationForView:(id)a0 fileName:(id)a1;

@end
