@class _KSTextReplacementClientStore;

@interface CIMTextReplacementController : NSObject

@property (readonly, nonatomic) _KSTextReplacementClientStore *textReplacementClientStore;

+ (id)sharedOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)rebuildWithMecabra:(struct __Mecabra { } *)a0;

@end
