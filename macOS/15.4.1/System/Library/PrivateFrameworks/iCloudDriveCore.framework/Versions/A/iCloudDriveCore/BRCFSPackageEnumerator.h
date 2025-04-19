@class NSURL, NSData, BRCSQLBackedSet;

@interface BRCFSPackageEnumerator : NSObject {
    NSURL *_rootURL;
    BRCSQLBackedSet *_packageItems;
    NSData *_boundaryKey;
}

+ (BOOL)enumerateItemsInPackageAtURL:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)enumeratePackageItemsWithSortOrder:(unsigned long long)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initForURL:(id)a0 boundaryKey:(id)a1 error:(id *)a2;

@end
