@class NSString;

@interface NSDictationManager : NSObject <NSMenuItemValidation> {
    long long _lastNotifiedState;
    long long _lastDictationState;
    struct __TISInputSource { } *_cachedInputSourceRef;
    BOOL _menuKeyEquivalentNeedsUpdating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (id)dictationMenuItemsForMenu:(id)a0;
+ (BOOL)isDictationSupported;

- (void)dealloc;
- (id)init;
- (struct __TISInputSource { } *)_inputSourceRef;
- (BOOL)_dictationIsAllowed;
- (BOOL)_dictationIsEnabled;
- (void)_dictationKeyChanged;
- (void)_dictationStateChanged:(id)a0;
- (void)_updateKeyEquivalentForMenuItem:(id)a0;
- (void)dictationItemSelected:(id)a0;
- (void)updateDictationState:(long long)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
