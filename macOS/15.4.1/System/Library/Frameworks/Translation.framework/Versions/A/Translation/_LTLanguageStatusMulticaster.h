@class NSString, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _LTLanguageStatusMulticaster : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_statusObservers;
    NSMutableDictionary *_lastStatusObservations;
    NSMutableDictionary *_connectionIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_cancelWithConnectionIdentifier:(id)a0 observationType:(unsigned long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)_multicastObservations:(id)a0 observationType:(unsigned long long)a1 progress:(BOOL)a2;
- (void)_reconnectIfStreamingWithConnectionIdentifier:(id)a0 observationType:(unsigned long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)_removeAllObservers;
- (void)_startWithConnectionIdentifier:(id)a0 observationType:(unsigned long long)a1 useDedicatedMachPort:(BOOL)a2;
- (void)languageStatusChangedForType:(unsigned long long)a0 progress:(BOOL)a1 observations:(id)a2;

@end
