@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (void)startSyncHelper;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;
- (id)currentLoadedInputModes;
- (BOOL)hasActiveInputManagers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (BOOL)isActiveInputManager:(id)a0;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity;
- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers;
- (void)releaseAllLanguageModelBuffers;
- (void)removeInputModeFromAllContainers:(id)a0;

@end
