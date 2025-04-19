@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (BOOL)hasDeviceBeenUnlocked;

@end
