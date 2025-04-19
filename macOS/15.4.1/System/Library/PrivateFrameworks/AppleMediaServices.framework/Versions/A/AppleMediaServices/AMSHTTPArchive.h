@class NSString, NSData;

@interface AMSHTTPArchive : NSObject <NSSecureCoding>

@property (class, readonly) NSString *directory;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *backingJSONData;
@property (getter=isCompressed) BOOL compressed;
@property (readonly) NSData *JSONData;
@property (retain) NSString *urlString;

+ (id)merge:(id)a0;
+ (id)_createJSONObjectForEntries:(id)a0;
+ (id)_createJSONObjectForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
+ (double)_timeIntervalFromFilename:(id)a0;
+ (id)ams_dateFormatterForTimeZone:(id)a0;
+ (id)ams_generateCommentsStringForMetrics:(id)a0;
+ (id)ams_generateContentDictionaryForResponse:(id)a0 responseData:(id)a1;
+ (id)ams_generateHeadersArrayForHTTPHeaders:(id)a0;
+ (id)ams_generateRequestDictionaryForMetrics:(id)a0 requestData:(id)a1;
+ (id)ams_generateResponseDictionaryForMetrics:(id)a0 responseData:(id)a1;
+ (id)merge:(id)a0 withEstimatedFileSizeLimit:(unsigned long long)a1;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHTTPArchiveTaskInfo:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)initWithMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
- (void)logHARData;
- (BOOL)writeToDiskWithError:(id *)a0 compressed:(BOOL)a1;
- (BOOL)writeToDiskWithError:(id *)a0 compressed:(BOOL)a1 appendCombined:(BOOL)a2;

@end
