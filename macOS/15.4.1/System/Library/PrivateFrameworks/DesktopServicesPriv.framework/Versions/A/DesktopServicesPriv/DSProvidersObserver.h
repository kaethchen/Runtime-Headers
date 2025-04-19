@class NSObject, NSArray, FINode;

@interface DSProvidersObserver : NSObject {
    struct TNodePtr { FINode *fFINode; } fParentNode;
    NSObject *_token;
    NSArray *_providers;
}

@property (readonly) BOOL populated;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)providers;
- (id)providersByAddingProviderIfNeeded:(id)a0;
- (void)receivedChanges:(id)a0;
- (void)setProviders:(id)a0;

@end
