@class NSURL;

@interface DiskImageGraphNodeNative : DiskImageGraphNode

@property (retain, nonatomic) NSURL *filePath;

+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)URL;
- (id)toDictionary;
- (BOOL)deleteImage;
- (id)initWithDictionary:(id)a0 updateChangesToDict:(BOOL)a1 workDir:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 tag:(id)a1 UUID:(id)a2 parentNode:(id)a3 metadata:(id)a4 isCache:(BOOL)a5;
- (id)toDIShadowNode;
- (BOOL)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
