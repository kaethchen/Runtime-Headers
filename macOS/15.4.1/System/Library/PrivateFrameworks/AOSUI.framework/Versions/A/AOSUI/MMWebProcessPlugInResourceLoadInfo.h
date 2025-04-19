@class _WKFrameHandle, NSURL, NSString;

@interface MMWebProcessPlugInResourceLoadInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long resourceLoadID;
@property (retain, nonatomic) _WKFrameHandle *frame;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSString *originalHTTPMethod;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
