@class AXFUIElement;

@interface SCRGarageBandScrollArea : SCRScrollArea

@property (nonatomic) BOOL _containsTimeLineGroups;
@property (retain, nonatomic) AXFUIElement *_currentTimeLineGroup;

- (void).cxx_destruct;
- (BOOL)addSelectedChildrenDescriptionToRequest:(id)a0 onlyAnnounceSelectedCount:(BOOL)a1;
- (BOOL)handleNavigationEvent:(id)a0 request:(id)a1 commandKey:(id)a2 selector:(SEL)a3 canScroll:(BOOL)a4 canWrap:(BOOL)a5;
- (void)handleSelectionChange:(id)a0;
- (BOOL)isChildScrollable:(id)a0;
- (BOOL)moveToLinkedItemWithEvent:(id)a0 andInteract:(BOOL)a1 request:(id)a2 fallbackToNextSpot:(BOOL)a3;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldPromoteUIElement:(id)a0;

@end
