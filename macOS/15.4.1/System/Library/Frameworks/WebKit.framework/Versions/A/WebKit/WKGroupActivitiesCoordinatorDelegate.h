@class NSString;

@interface WKGroupActivitiesCoordinatorDelegate : NSObject <AVPlaybackCoordinatorPlaybackControlDelegate> {
    struct WeakPtr<WebKit::GroupActivitiesCoordinator, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParent:(void *)a0;
- (void)playbackCoordinator:(id)a0 didIssueBufferingCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssuePauseCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssuePlayCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssueSeekCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssuePrepareTransitionCommand:(id)a1;

@end
