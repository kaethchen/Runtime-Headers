@class NSMutableDictionary;
@protocol NSDefaultChangeObserver;

@interface NSObservableDefaults : NSUserDefaults {
    NSMutableDictionary *_keyTargetDict;
}

@property (weak) id<NSDefaultChangeObserver> observer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)_initWithSuiteName:(id)a0 container:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)_ignoredKeys;
- (id)_keyTargetDictionary;
- (void)_removeTarget:(id)a0 action:(SEL)a1 fromTargetArray:(id)a2;
- (void)_sendActionsForKeys:(id)a0 values:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forKey:(id)a2;
- (void)removeTarget:(id)a0 action:(SEL)a1 forKey:(id)a2;

@end
