@class NSLock, SCRCThreadKey, SCRCTargetSelectorTimer, SCRCStackQueue, SCRCIndexMap, AXFUIElement, NSMutableSet, NSMutableArray, SCRApplication, AXFMutableDiscontinuousArray;

@interface SCRElementHash : NSObject {
    BOOL _isDone;
    BOOL _usesSameThread;
    BOOL _doesMakeHashMarkersForAllChildren;
    BOOL _isElementHashHeld;
    BOOL _shouldStop;
    BOOL _didStart;
    NSMutableArray *_markerList;
    SCRCIndexMap *_markerMap;
    SCRCTargetSelectorTimer *_restTimer;
    AXFUIElement *_rootElement;
    unsigned long long _numberOfElementsSaved;
    unsigned long long _totalElementsRetrieved;
    double _fillTime;
    long long _lastDeterminedGroupIndex;
    NSLock *_usageLock;
    struct CGPoint { double x; double y; } _windowPosition;
    SEL _indexReachedCallback;
    id _indexReachedTarget;
    long long _indexReachedIndex;
    SCRCThreadKey *_indexReachedThreadKey;
    SEL _doneCallback;
    id _doneTarget;
    SCRCThreadKey *_doneThreadKey;
    SCRCThreadKey *_threadKey;
    SCRCStackQueue *_processingStack;
}

@property (weak, nonatomic) SCRApplication *_application;
@property (retain, nonatomic) NSMutableSet *_visited;
@property (retain, nonatomic) AXFMutableDiscontinuousArray *_sharedUIElementRanges;

+ (void)initialize;
+ (BOOL)isRoleCompound:(id)a0;
+ (id /* block */)childrenCountGetterForRoleHash:(unsigned long long)a0;
+ (id)elementHashKey:(id)a0;
+ (void)assignAttributesToElementMarker:(id)a0 uiElement:(id)a1 withParentRoleHash:(unsigned long long)a2;
+ (id /* block */)childrenAtIndexWithLengthGetterForRoleHash:(unsigned long long)a0;
+ (id /* block */)childrenGetterForRoleHash:(unsigned long long)a0;
+ (void)populateElementHashAttributes:(id)a0 andMask:(unsigned long long *)a1 forTextAttributes:(id)a2 andString:(id)a3;
+ (void)setExcludesCompoundChildren:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isDone;
- (BOOL)_shouldStop;
- (void)_refill;
- (void)determineGroups;
- (id)_compoundHashMarkersForUIElement:(id)a0 withAXChildIndex:(unsigned long long)a1;
- (id)_createGroupsInFirstPass;
- (void)_determineGroups;
- (void)_fill;
- (void)_performDoneCallback:(id)a0 selector:(id)a1 threadKey:(id)a2;
- (id)_saveElementHash:(id)a0 withAXChildIndex:(unsigned long long)a1 withParentRoleHash:(unsigned long long)a2;
- (void)_secondPass:(id)a0;
- (BOOL)beginElementHashUsage;
- (unsigned long long)elementHashMarkerIndexForUIElement:(id)a0 withContext:(id)a1;
- (id)elementHashMarkerList;
- (void)endElementHashUsage;
- (void)enumerateMarkersFromIndex:(unsigned long long)a0 options:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)hasHashMarkersForAllChildren;
- (BOOL)haveGroupsBeenDetermined;
- (struct CGPoint { double x0; double x1; })initialWindowPosition;
- (void)refill;
- (void)registerDoneCallback:(SEL)a0 withThreadKey:(id)a1 onTarget:(id)a2;
- (void)registerIndexReachedCallback:(SEL)a0 forIndex:(long long)a1 withThreadKey:(id)a2 onTarget:(id)a3;
- (void)startFillWithElement:(id)a0 synchronous:(BOOL)a1;

@end
