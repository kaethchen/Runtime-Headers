@class NSURLSession;

@interface ICQOfferUpdateController : NSObject {
    NSURLSession *_sharedURLSession;
}

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (void)performOfferUpdateWithContext:(id)a0 completion:(id /* block */)a1;

@end
