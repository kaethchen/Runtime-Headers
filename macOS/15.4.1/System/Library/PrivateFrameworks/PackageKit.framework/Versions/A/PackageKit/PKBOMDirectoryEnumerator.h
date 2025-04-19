@class PKBOM;

@interface PKBOMDirectoryEnumerator : NSDirectoryEnumerator {
    PKBOM *_pkBom;
    struct _BOMBomEnumerator { } *_be;
    struct _BOMFSObject { } *_currentFSO;
}

- (void)dealloc;
- (id)nextObject;
- (BOOL)isDirectory;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)fileAttributes;
- (id)initWithBOM:(id)a0;

@end
