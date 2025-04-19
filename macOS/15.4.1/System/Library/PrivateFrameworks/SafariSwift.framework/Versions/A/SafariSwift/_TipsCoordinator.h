@class NSView;

@interface _TipsCoordinator : NSObject {
    void /* unknown type, empty encoding */ webSearchTipManager;
}

@property (nonatomic, readonly) NSView *webSearchTipView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ observer;

+ (void)configureTipsCenter;

- (id)init;
- (void).cxx_destruct;
- (void)startObserving;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
