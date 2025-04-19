@class SCRVisualsHighlightCursor, NSDictionary, SCRElement, SCRVisualsMenuWindow, NSArray, NSString;

@interface SCRVerbosityRotorCollectionGuide : SCRCollectionGuide <SCRCollectionGuideDelegateProtocol>

@property (readonly, weak, nonatomic) SCRVisualsMenuWindow *_menuWindow;
@property (readonly, weak, nonatomic) SCRVisualsHighlightCursor *_cursor;
@property (readonly, nonatomic) NSDictionary *_verbosityRotorGuides;
@property (retain, nonatomic) SCRElement *_focusedElement;
@property (retain, nonatomic) NSArray *_focusedElementVerbosityRotorGuides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)a0;
- (id)_defaultVerbosityRotorGuides;
- (BOOL)_moveToGuideWithType:(unsigned long long)a0;
- (void)_saveGuidePositionState;
- (void)_setupVerbosityRotorGuide:(id)a0;
- (void)collectionGuide:(id)a0 willShowGuide:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithMenuWindow:(id)a0 cursor:(id)a1;
- (void)openVerbosityRotorWithFocusedElement:(id)a0;
- (BOOL)quickVerbosityRotorOption:(id)a0;

@end
