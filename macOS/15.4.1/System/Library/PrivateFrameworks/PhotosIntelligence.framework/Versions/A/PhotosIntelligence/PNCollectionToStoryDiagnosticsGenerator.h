@class PHPhotoLibrary, NSError;

@interface PNCollectionToStoryDiagnosticsGenerator : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ repositoryURL;
    void /* unknown type, empty encoding */ indexFileURL;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ storyDiagnosticsIndexFilename;
    void /* unknown type, empty encoding */ logger;
}

+ (void)clearAllFilesWithPhotoLibrary:(PHPhotoLibrary *)a0 completionHandler:(void (^)(NSError *))a1;

- (id)initWithPhotoLibrary:(id)a0 error:(id *)a1;

@end
