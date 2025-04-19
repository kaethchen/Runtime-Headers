@class NSURLRequest, NSURL, NSData;

@interface NWURLSessionUploadResumeInfo : NSObject <NSSecureCoding> {
    NSURLRequest *_originalRequest;
    NSURL *_resumeURL;
    NSData *_data;
    NSURL *_fileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
