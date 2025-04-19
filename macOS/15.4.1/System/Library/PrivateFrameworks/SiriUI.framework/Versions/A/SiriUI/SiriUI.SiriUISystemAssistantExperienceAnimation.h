@interface SiriUI.SiriUISystemAssistantExperienceAnimation : NSObject {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ preAnimationBlock;
    void /* unknown type, empty encoding */ animationBlock;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ animateNext;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAnimationBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithPreAnimationBlock:(id /* block */)a0 animationBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)initWithView:(id)a0 animateNext:(BOOL)a1 preAnimationBlock:(id /* block */)a2 animationBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
