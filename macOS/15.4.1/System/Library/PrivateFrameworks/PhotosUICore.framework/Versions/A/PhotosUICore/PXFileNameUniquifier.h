@class NSArray;

@interface PXFileNameUniquifier : NSObject

@property (readonly, copy, nonatomic) NSArray *existingFileSources;

- (void).cxx_destruct;
- (BOOL)_fileExistsAtPath:(id)a0;
- (void)_rememberUniquifiedPath:(id)a0;
- (id)_uniqueFileSystemName:(id)a0 inDirectory:(id)a1 rememberResult:(BOOL)a2;
- (id)ensureUniqueFileURL:(id)a0;
- (id)ensureUniquePath:(id)a0;
- (id)ensureUniquePath:(id)a0 alternateExtensions:(id)a1;
- (id)ensureUniquePath:(id)a0 andAlternateExtension:(id)a1;
- (id)initWithExistingFileSources:(id)a0;
- (id)uniqueFileSystemName:(id)a0 inDirectory:(id)a1;
- (id)uniqueFileSystemNameForPath:(id)a0 withAlternateExtension:(id)a1;
- (id)uniqueFileSystemNameForPath:(id)a0 withAlternateExtensions:(id)a1;

@end
