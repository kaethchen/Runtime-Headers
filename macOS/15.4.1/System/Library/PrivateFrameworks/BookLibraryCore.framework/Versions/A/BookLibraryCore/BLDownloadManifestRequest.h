@class NSURLRequest;

@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *URLRequest;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLRequest:(id)a0;
- (void)startWithManifestResponseBlock:(id /* block */)a0;

@end
