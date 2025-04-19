@class NSData;

@interface PKBOM : NSObject {
    NSData *_bomData;
    struct _BOMBom { } *_BOMBom;
}

+ (id)_NSFileTypeFromBOMFSObjType:(int)a0;
+ (id)_attributesOfBOMFSObject:(struct _BOMFSObject { } *)a0;
+ (BOOL)_setAttributes:(id)a0 ofBOMFSObject:(struct _BOMFSObject { } *)a1;

- (void)dealloc;
- (unsigned long long)totalSize;
- (struct _BOMBom { } *)BOMBom;
- (id)attributesOfItemAtPath:(id)a0;
- (id)directoryEnumerator;
- (unsigned long long)fileCount;
- (id)initWithBOMData:(id)a0;
- (id)initWithBOMPath:(id)a0;
- (id)subpathsOfDirectoryAtPath:(id)a0;

@end
