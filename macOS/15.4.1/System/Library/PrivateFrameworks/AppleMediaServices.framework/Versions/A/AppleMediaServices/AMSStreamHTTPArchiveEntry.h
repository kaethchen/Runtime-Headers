@class NSArray, NSString;

@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *entries;
@property (retain) NSString *urlString;

+ (id)_createEntriesForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (id)initWithHTTPArchiveTaskInfo:(id)a0;

@end
