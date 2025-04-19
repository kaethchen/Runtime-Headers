@class NSView, NSString, _TipsCoordinator;
@protocol TipsObserver;

@interface TipsCoordinator : NSObject <_TipsObserver> {
    _TipsCoordinator *_internal;
}

@property (weak, nonatomic) id<TipsObserver> observer;
@property (readonly, nonatomic) NSView *webSearchTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;
- (void)webSearchTipDidBecomeUnavailable;

@end
