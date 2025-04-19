@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;

+ (void)actionForURL:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)performWithCompletion:(id /* block */)a0;

@end
