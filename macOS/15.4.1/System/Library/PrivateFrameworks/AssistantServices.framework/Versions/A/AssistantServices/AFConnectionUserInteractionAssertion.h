@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)releaseAssertion;

@end
