@class NSURL, NSString, NSMutableArray;

@interface IASInstallMedia : NSObject

@property (copy) NSURL *URL;
@property (copy) NSString *name;
@property (copy) NSURL *iconURL;
@property long long kind;
@property (retain) NSMutableArray *submedia;
@property long long mediaState;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)attachWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)detachWithOptions:(id)a0 completion:(id /* block */)a1;

@end
