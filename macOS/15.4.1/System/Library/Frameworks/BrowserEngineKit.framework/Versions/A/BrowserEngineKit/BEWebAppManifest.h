@class NSData, NSURL;

@interface BEWebAppManifest : NSObject

@property (readonly, copy, nonatomic) NSData *jsonData;
@property (readonly, copy, nonatomic) NSURL *manifestURL;

- (void).cxx_destruct;
- (id)initWithJSONData:(id)a0 manifestURL:(id)a1;

@end
