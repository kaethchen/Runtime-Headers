@class NSLock;
@protocol ISUIHostProtocol;

@interface CKDialogController : CKServiceInterface {
    NSLock *_lock;
    id<ISUIHostProtocol> _delegate;
}

+ (id)sharedDialogController;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithStoreClient:(id)a0;

@end
