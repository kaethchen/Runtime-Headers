@interface WBSDownloadFileBOMUnarchiver : WBSDownloadFileUnarchiver

@property (nonatomic) struct _BOMCopier { } *copier;

- (void)_unarchiveFileWithName:(id)a0 inDirectoryWithHandle:(id)a1 completionHandler:(id /* block */)a2;
- (id)_extractionOptionsForURL:(id)a0;
- (BOOL)canInterruptUnarchiving;
- (void)interruptUnarchiving;

@end
