@class NSString, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface PXUbiquitousKeyValueStoreValueAccessor : NSObject {
    id /* block */ _defaultValueFuture;
    id /* block */ _valueFilter;
    id /* block */ _changeHandler;
}

@property (retain) id cachedValue;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storeQueue;
@property (retain) id currentValue;
@property (readonly) id currentValueIfLoaded;

+ (id)_defaultQueue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_currentValueLoadIfNeeded:(BOOL)a0;
- (void)_keyValueStoreDidChangeExternally:(id)a0;
- (void)_setCurrentValue:(id)a0 updateUbiquitousKeyValueStore:(BOOL)a1 notifyChange:(BOOL)a2;
- (void)_storeQueue_handleLoadValueAsync;
- (id)initWithUbiquitousKeyValueStore:(id)a0 key:(id)a1 defaultValueFuture:(id /* block */)a2 valueFilter:(id /* block */)a3 changeHandler:(id /* block */)a4;
- (void)loadValueAsyncIfNeeded;

@end
