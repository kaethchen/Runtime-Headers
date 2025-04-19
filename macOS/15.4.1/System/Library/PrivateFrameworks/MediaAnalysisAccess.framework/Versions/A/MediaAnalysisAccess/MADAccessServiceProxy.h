@class MADAccessService;

@interface MADAccessServiceProxy : NSObject <MADAccessClientProtocol> {
    MADAccessService *_service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0;

@end
