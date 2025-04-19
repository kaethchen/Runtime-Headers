@class NSURLSessionTaskMetrics, NSData;

@interface AMSHTTPArchiveTaskInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURLSessionTaskMetrics *metrics;
@property (readonly) NSData *HTTPBody;
@property (readonly) NSData *responseData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLTaskInfo:(id)a0;

@end
