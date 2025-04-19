@class NSString, FBSDisplayLayout, FBSDisplayLayoutPublisher;
@protocol BSInvalidatable;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving, FBSDisplayLayoutPublishing> {
    FBSDisplayLayoutPublisher *_publisher;
    id<BSInvalidatable> _backlightTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)flush;
- (id)addElement:(id)a0;
- (id)_addElement:(id)a0 forKey:(id)a1;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;
- (id)transitionAssertionWithReason:(id)a0;
- (id)_initWithPublisher:(id)a0;

@end
