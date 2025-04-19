@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator

@property (readonly, weak, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)isValidImagePathExtension:(id)a0;
- (BOOL)isValidVideoPathExtension:(id)a0;

@end
