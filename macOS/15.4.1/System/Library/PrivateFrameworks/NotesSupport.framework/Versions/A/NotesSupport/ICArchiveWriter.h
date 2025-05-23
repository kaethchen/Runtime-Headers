@class NSURL, NSString;

@interface ICArchiveWriter : NSObject {
    struct archive { } *_archive;
}

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) BOOL usesCompression;
@property (nonatomic) BOOL flatten;
@property (copy, nonatomic) NSString *flattenFolderName;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)finish:(id *)a0;
- (BOOL)open:(id *)a0;
- (id)initWithDestinationURL:(id)a0 baseURL:(id)a1;
- (BOOL)writeURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;
- (BOOL)writeURLs:(id)a0 error:(id *)a1;

@end
