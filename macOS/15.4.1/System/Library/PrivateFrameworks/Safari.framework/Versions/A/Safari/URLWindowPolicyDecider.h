@class NSEvent;

@interface URLWindowPolicyDecider : NSObject

@property (class, nonatomic) BOOL restrictNavigationsToCurrentWebView;

@property (retain, nonatomic) NSEvent *event;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long eventModifierFlags;
@property (nonatomic) BOOL middleMouseButtonWasClicked;
@property (nonatomic) BOOL respectKeyEquivalents;
@property (nonatomic, getter=isForOpeningCloudTab) BOOL forOpeningCloudTab;
@property (nonatomic) BOOL requireCommandKey;
@property (nonatomic) BOOL commandClickCreatesNewTabs;
@property (nonatomic) BOOL newTabsAndWindowsOpenInFront;
@property (nonatomic) BOOL disallowAddToReadingList;
@property (nonatomic) unsigned int navigationType;
@property (copy, nonatomic) id /* block */ shouldNavigateToFavoriteInResponseToKeyEventDecider;

+ (id)defaultDecider;
+ (id)defaultDeciderForCurrentEvent;
+ (id)defaultDeciderForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)_decidePolicyForNavigationEvent;
- (long long)_decidePolicyForCreatingWindowOrTab;
- (long long)_decidePolicyForStandardEvent;
- (long long)decidePolicy;

@end
