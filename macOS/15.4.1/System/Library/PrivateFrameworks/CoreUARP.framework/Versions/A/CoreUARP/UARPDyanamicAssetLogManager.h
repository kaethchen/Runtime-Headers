@class NSURL;

@interface UARPDyanamicAssetLogManager : NSObject

@property (readonly) NSURL *baseURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (BOOL)newLog:(id)a0 error:(id *)a1;

@end
