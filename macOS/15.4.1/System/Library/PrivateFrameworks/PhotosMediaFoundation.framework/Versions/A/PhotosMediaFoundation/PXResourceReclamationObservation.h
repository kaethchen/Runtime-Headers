@protocol PXAVResourceReclamationController;

@interface PXResourceReclamationObservation : NSObject <PXAVResourceReclamationObserver> {
    id /* block */ _eventHandler;
    id _target;
    SEL _selector;
}

@property (readonly, weak, nonatomic) id<PXAVResourceReclamationController> controller;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)resourceReclamationEventDidOccur:(id)a0;
- (id)initWithController:(id)a0 weakTarget:(id)a1 selector:(SEL)a2;

@end
