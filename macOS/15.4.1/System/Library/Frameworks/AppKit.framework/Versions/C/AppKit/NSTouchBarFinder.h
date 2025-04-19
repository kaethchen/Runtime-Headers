@class NSMapTable;
@protocol NSTouchBarProviderContainer, NSTouchBarFinderObserver;

@interface NSTouchBarFinder : NSObject {
    id<NSTouchBarProviderContainer> _rootProviderContainer;
    id<NSTouchBarFinderObserver> _observer;
    NSMapTable *_observationsByProvider;
}

- (void)dealloc;
- (void)invalidate;
- (void)_userDefinedTouchBarDidReset:(id)a0;
- (id)initWithRootProviderContainer:(id)a0 observer:(id)a1;

@end
