@interface MOMediaFileSystemItem : MOMediaItem

+ (id)urlForFileURL:(id)a0;

- (void)_reloadProperties;
- (id)initWithFileURL:(id)a0;
- (id)thumbnailImageOperationForResolution:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 mode:(unsigned long long)a2 reason:(unsigned long long)a3 placeholder:(BOOL)a4 colorSpace:(id)a5 withCompletionHandler:(id /* block */)a6;

@end
