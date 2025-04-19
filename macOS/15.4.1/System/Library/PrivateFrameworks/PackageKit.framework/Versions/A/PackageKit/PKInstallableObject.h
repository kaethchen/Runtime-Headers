@class PKProduct, NSArray, PKPackage, NSURL, PKArchive;

@interface PKInstallableObject : NSObject {
    PKArchive *_archive;
    NSArray *_cachedCertificates;
    PKProduct *_product;
    PKPackage *_package;
    NSArray *_cachedReferences;
    NSArray *_cachedBomDatas;
}

@property (readonly) NSURL *URL;
@property (readonly) BOOL isSigned;
@property (readonly) NSArray *certificates;
@property (readonly) NSArray *referencedObjects;
@property (readonly) NSArray *bomsAsData;

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)_packageURLsUnderChoice:(id)a0 internal:(BOOL)a1;

@end
