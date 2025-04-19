@class NSArray, NSFileManager, NSURL, PTPixelBufferUtil, NSObject;
@protocol OS_dispatch_queue;

@interface PTEffectBackgroundURLManager : NSObject {
    NSArray *_backgroundImage;
    NSArray *_backgroundGradient;
    NSFileManager *_fileManager;
    NSURL *_userBackgroundDirectory;
    NSURL *_userBackgroundPList;
    NSURL *_userBackgroundDirectoryImages;
    NSURL *_userBackgroundDirectoryThumbnails;
    NSObject<OS_dispatch_queue> *_asyncWorkerQueue;
    PTPixelBufferUtil *_pixelBufferUtil;
    BOOL _loadCustomBackgrounds;
}

+ (struct CGSize { double x0; double x1; })findSize:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (void).cxx_destruct;
- (id)backgroundsWithType:(long long)a0;
- (id)initWithUserBackgrounds:(BOOL)a0;
- (void)addUserBackground:(id)a0 ciImage:(id)a1 backgroundToReplace:(id)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)addUserBackground:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)addUserBackgroundWithImage:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)arrayToPlist:(id)a0;
- (id)asyncWorkerQueue;
- (BOOL)copyAsFullsizeAndThumbnailFromPixelBuffer:(struct __CVBuffer { } *)a0 outputPathFullsize:(id)a1 outputPathThumbnail:(id)a2;
- (id)createBuiltInBackgroundURLsWithFiles:(id)a0 extension:(id)a1 subdirectory:(id)a2;
- (void)hasUserBackground:(id)a0 completion:(id /* block */)a1;
- (void)hasUserBackgroundWithImage:(id)a0 completion:(id /* block */)a1;
- (void)hasUserBackgroundWithPixelBuffer:(id)a0 ciImage:(id)a1 completion:(id /* block */)a2;
- (void)loadUserBackgroundWithPath:(id)a0;
- (id)makeUniqueFilename;
- (id)plistToArray:(id)a0;
- (void)removeUserBackground:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)replaceUserBackground:(id)a0 withBackground:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)replaceUserBackground:(id)a0 withImage:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;

@end
