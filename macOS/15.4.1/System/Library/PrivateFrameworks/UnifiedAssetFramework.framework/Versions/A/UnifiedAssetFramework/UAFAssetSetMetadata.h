@class NSString;

@interface UAFAssetSetMetadata : NSObject

@property (retain, nonatomic) NSString *minOSVersion;
@property (retain, nonatomic) NSString *maxOSVersion;

+ (id)OSVersion;
+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)fromAssetDir:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)OSSupported;

@end
