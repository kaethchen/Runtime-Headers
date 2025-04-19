@class NSLock, NSString, NSMutableDictionary, NSSet, NSBundle, NSArray;

@interface SCROBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
    NSLock *_contentLock;
}

@property (class, readonly) SCROBrailleDisplayInputManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_bundle;
- (id)_sixDotCommands;
- (id)_commandForHidUsage:(id)a0;
- (id)_commandForInputIdentifier:(id)a0 userDefaults:(id)a1 commandDictionary:(id)a2;
- (id)_commandsFromBrailleInputMode:(int)a0;
- (id)_eightDotCommands;
- (id)_generateUnassignedKeyForUserDefaults:(id)a0;
- (void)_nullifyCommandWithIdentifier:(id)a0 userDefaults:(id)a1 commandDictionary:(id)a2;
- (id)buttonNameAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)buttonNameForInputIdentifier:(id)a0 forDisplayWithToken:(int)a1;
- (id)commandAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)commandForBrailleKey:(id)a0;
- (void)configureWithDriverConfiguration:(id)a0;
- (unsigned long long)countForDisplayWithToken:(int)a0;
- (unsigned long long)countForUnassignedWithToken:(int)a0;
- (id)driverIdentifierForDisplayWithToken:(int)a0;
- (id)factoryCommandAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)fullInputArrayForDisplayWithToken:(int)a0;
- (unsigned long long)indexOfInputIdentifier:(id)a0 forDisplayWithToken:(int)a1;
- (id)inputIdentifierAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (void)insertAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (BOOL)isUnassignedIdentifierAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)modelIdentifierForDisplayWithToken:(int)a0;
- (BOOL)moveIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 forDisplayWithToken:(int)a2;
- (void)removeAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (void)resetToFactoryCommandAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (void)restoreDisplayToFactoryDefaults:(int)a0;
- (void)setCommand:(id)a0 atIndex:(unsigned long long)a1 forDisplayWithToken:(int)a2;
- (void)setInputIdentifier:(id)a0 atIndex:(unsigned long long)a1 forDisplayWithToken:(int)a2;
- (void)unassignIdentifierAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;

@end
