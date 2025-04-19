@class NSTouchBar, NSString, NSArray, NSSet, NSMutableDictionary, NSMutableSet, NSGroupTouchBarItem, NSMutableOrderedSet;

@interface ICMAlertSheetTouchBarController : ICMBaseTouchBarController <NSTouchBarDelegate>

@property (retain, nonatomic) NSTouchBar *groupTouchBar;
@property (retain, nonatomic) NSGroupTouchBarItem *groupTouchBarItem;
@property (retain, nonatomic) NSTouchBar *alertTouchBar;
@property (retain, nonatomic) NSMutableOrderedSet *buttonIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *buttonIdentifiersToButtons;
@property (retain, nonatomic) NSMutableDictionary *buttonIdentifiersToTouchBarItems;
@property (readonly, nonatomic) NSArray *currentIdentifiers;
@property (retain, nonatomic) NSMutableSet *observedButtons;
@property (retain, nonatomic) NSSet *observableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)touchBar;
- (void)addButton:(id)a0;
- (void)updateButton:(id)a0;
- (void)removeAllButtons;
- (void)removeButton:(id)a0;
- (void)stopObservingButtonIfNecessary:(id)a0;
- (void)copyValuesFromButton:(id)a0 toButton:(id)a1;
- (id)dfrButtonFromButton:(id)a0;
- (void)invalidateCurrentIdentifiers;
- (void)startObservingButtonIfNecessary:(id)a0;

@end
