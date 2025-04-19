@class NSURL;

@interface MCRemotePlaceholderFileWrapper : MCPlaceholderFileWrapper

@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)symbolicLinkDestinationURL;
- (BOOL)isRemotelyAccessed;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)a0;

@end
