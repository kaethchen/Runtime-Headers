@class NSString, NSView;

@interface _IKTypeSelectData : NSObject {
    NSString *_currentSearch;
    long long _currentSearchIndex;
    long long _initialSearchIndex;
    long long _totalIndexes;
    NSView *_view;
}

- (void)dealloc;
- (void)_typeSelectEndCurrentSearch;
- (void)cancelScheduledEndOfSearch;
- (void)clearView;
- (id)currentSearch;
- (id)nextSearchStringForNewValue:(id)a0;
- (void)scheduleEndOfSearch;
- (void)setCurrentSearch:(id)a0;
- (void)_resetCurrentSearchIndex;
- (long long)currentSearchIndex;
- (id)initWithInitialSearchIndex:(long long)a0 totalIndexes:(long long)a1 forView:(id)a2;
- (long long)initialSearchIndex;
- (void)setCurrentSearchIndex:(long long)a0;

@end
