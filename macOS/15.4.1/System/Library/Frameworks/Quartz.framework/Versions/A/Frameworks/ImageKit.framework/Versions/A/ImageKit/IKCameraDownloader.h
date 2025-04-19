@class NSString, IKCameraFolderWatcher;
@protocol IKCameraDownloaderDelegate;

@interface IKCameraDownloader : NSObject

@property (copy) NSString *path;
@property (retain) IKCameraFolderWatcher *folderWatcher;
@property id<IKCameraDownloaderDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)downloadPathMatchesPath:(id)a0;
- (id)infoForFileName:(id)a0 stat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a1;
- (void)iterateFolder:(id)a0 withBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setDownloadPath:(id)a0;
- (void)updateFiles;

@end
