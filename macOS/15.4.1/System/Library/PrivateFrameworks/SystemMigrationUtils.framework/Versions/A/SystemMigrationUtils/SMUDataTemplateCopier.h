@class NSURL, NSArray;

@interface SMUDataTemplateCopier : NSObject

@property (readonly) unsigned long long totalSymlinkedItems;
@property (readonly) unsigned long long totalDuplicateItems;
@property (readonly, copy) NSURL *systemURL;
@property (readonly, copy) NSURL *dataTemplateURL;
@property (copy) id /* block */ logHandler;
@property (copy) id /* block */ progressHandler;
@property (readonly, copy) NSArray *symlinkedFilePatterns;
@property (readonly, copy) NSArray *symlinkedDirectoryPatterns;
@property (readonly) BOOL hasDataTemplateBOM;
@property (readonly) unsigned long long totalItems;
@property (readonly) unsigned long long totalBytes;

- (id)init;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)systemVersionDictionary;
- (BOOL)_shouldSymlinkPath:(const char *)a0 isDirectory:(BOOL)a1;
- (BOOL)_copyDataTemplateIfNeededToURL:(id)a0 error:(id *)a1 progress:(id /* block */)a2;
- (void)_enumerateDataTemplateBOM:(struct _BOMBom { } *)a0 block:(id /* block */)a1;
- (struct _BOMBom { } *)_openDataTemplateBOM;
- (struct _BOMBom { } *)_openDataTemplateBOMForWritingToPath:(const char *)a0;
- (BOOL)_writeDataTemplateReceiptBOMToURL:(id)a0 error:(id *)a1;
- (BOOL)_writeDataTemplateReceiptIfNeededToURL:(id)a0 error:(id *)a1;
- (BOOL)_writeDataTemplateReceiptPlistToURL:(id)a0 error:(id *)a1;
- (void)analyzeDataTemplate;
- (void)analyzeDataTemplateIfNeeded;
- (BOOL)copyDataTemplateToURL:(id)a0 error:(id *)a1;
- (BOOL)copyDataTemplateToURL:(id)a0 error:(id *)a1 progress:(id /* block */)a2;
- (id)dataTemplateBOMURL;
- (id)initWithSystemURL:(id)a0;
- (void)loadSymlinkedPatterns;
- (void)loadSymlinkedPatternsIfNeeded;
- (void)log:(id)a0 arguments:(char *)a1;
- (BOOL)shouldSymlinkPath:(id)a0 isDirectory:(BOOL)a1;
- (id)symlinkedPatternsManifestURL;

@end
