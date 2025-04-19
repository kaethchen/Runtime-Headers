@class KHFrame, NSArray, KHLayout, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface KHSelectionManager : NSObject

@property (readonly) NSArray *layoutSelection;
@property (readonly) NSArray *selectedLayouts;
@property (readonly) KHLayout *selectedLayout;
@property (readonly) NSArray *frameSelection;
@property (readonly) NSArray *selectedFrames;
@property (readonly) KHFrame *selectedFrame;
@property (readonly) KHFrame *selectedTextFrame;
@property (readonly) KHFrame *selectedPhotoFrame;
@property (readonly) KHFrame *selectedMapFrame;
@property (readonly, nonatomic) NSMapTable *flagsByObservers;
@property (readonly, nonatomic) NSMutableArray *internalSelections;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *selectionQueue;
@property (readonly) NSArray *selections;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)selectObject:(id)a0;
- (void)updateSelection;
- (id)debugViewController;
- (void)deselectObject:(id)a0;
- (void)_addSelectionsForObjects:(id)a0 type:(unsigned long long)a1;
- (void)_deselectAllObjects;
- (void)_deselectObjects:(id)a0;
- (void)_notifyObserversForOption:(unsigned long long)a0 withObjects:(id)a1;
- (id)_selectionForObject:(id)a0;
- (void)deselectAllObjects;
- (void)deselectObjects:(id)a0;
- (BOOL)objectIsSelected:(id)a0;
- (void)selectObject:(id)a0 forType:(unsigned long long)a1;
- (void)selectObjects:(id)a0;
- (void)selectObjects:(id)a0 forType:(unsigned long long)a1;
- (id)selectionForObject:(id)a0;
- (unsigned long long)selectionTypeForObject:(id)a0;
- (void)toggleObject:(id)a0;
- (void)toggleObjects:(id)a0;

@end
