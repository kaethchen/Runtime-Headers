@class NSArray;

@interface SSDownloadManifestResponse : NSObject <NSCoding> {
    NSArray *_invalidDownloads;
    NSArray *_validDownloads;
}

@property (retain) NSArray *invalidDownloads;
@property (retain) NSArray *validDownloads;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
