@class NSString;

@interface WebScrollerImpPairDelegateMac : NSObject <NSScrollerImpPairDelegate> {
    struct ThreadSafeWeakPtr<WebCore::ScrollerPairMac, WTF::NoTaggingTraits<WebCore::ScrollerPairMac>> { struct TaggedPtr<WebCore::ScrollerPairMac, WTF::NoTaggingTraits<WebCore::ScrollerPairMac>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _scrollerPair;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)inLiveResizeForScrollerImpPair:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAreaRectForScrollerImpPair:(id)a0;
- (struct CGPoint { double x0; double x1; })mouseLocationInContentAreaForScrollerImpPair:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollerImpPair:(id)a0 convertContentPoint:(struct CGPoint { double x0; double x1; })a1 toScrollerImp:(id)a2;
- (void)scrollerImpPair:(id)a0 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)a1;
- (id)initWithScrollerPair:(void *)a0;
- (void)scrollerImpPair:(id)a0 setContentAreaNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
