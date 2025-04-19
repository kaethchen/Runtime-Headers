@class NSString, WBSDownloadFileUnarchiver, NSData, NSUUID, NSDictionary;

@interface _SandboxDownloadEntry : NSObject <_SandboxEntry>

@property (copy, nonatomic) NSData *downloadBundleBookmarkData;
@property (copy, nonatomic) NSString *downloadFilename;
@property (copy, nonatomic) NSString *suggestedFilename;
@property (nonatomic) BOOL allowsOverwrite;
@property (retain, nonatomic) WBSDownloadFileUnarchiver *unarchiver;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)downloadBundleURLError:(id *)a0;
- (BOOL)setDownloadBundleURL:(id)a0 error:(id *)a1;

@end
