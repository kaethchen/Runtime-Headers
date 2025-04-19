@class _MLTLogger, NSString;

@interface _MLTBlobbyInteractor : NSObject

@property (retain, nonatomic) _MLTLogger *logger;
@property (retain, nonatomic) NSString *endpoint;

+ (id)endpoint;
+ (id)currentDate;
+ (id)hexStringFromBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)authorizationHeader:(id)a0 canonicalURI:(id)a1 canonicalQueryString:(id)a2 amzDate:(id)a3 dateStamp:(id)a4 payloadHash:(id)a5 accessKey:(id)a6 secretKey:(id)a7;
+ (id)encryptSHA256File:(id)a0;
+ (id)encryptSHA256String:(id)a0;
+ (id)encryptSha256Data:(id)a0;
+ (id)sign:(id)a0 data:(id)a1;
+ (id)signatureKey:(id)a0 dateStamp:(id)a1 regionName:(id)a2 serviceName:(id)a3;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (BOOL)downloadAsset:(id)a0 localPath:(id)a1 accessKey:(id)a2 secretKey:(id)a3 error:(id *)a4;
- (BOOL)uploadAsset:(id)a0 localPath:(id)a1 accessKey:(id)a2 secretKey:(id)a3 error:(id *)a4;
- (BOOL)uploadAssetData:(id)a0 uploadData:(id)a1 accessKey:(id)a2 secretKey:(id)a3 error:(id *)a4;

@end
