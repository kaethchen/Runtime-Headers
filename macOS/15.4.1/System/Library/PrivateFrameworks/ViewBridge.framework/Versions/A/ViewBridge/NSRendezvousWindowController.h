@class NSSet;

@interface NSRendezvousWindowController : NSServiceViewController {
    NSSet *_bridgeKeysObserved;
}

+ (void)addBridgeKeys:(id)a0;
+ (id)bridgeKeys;
+ (id)bridgeKeysForSemiAutonomousWindowBase:(unsigned char)a0;
+ (id)controllerForWindow:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithWindow:(id)a0;
- (BOOL)_isSecondary;
- (id)accessibilityCancelButton;
- (id)accessibilityDefaultButton;
- (void)loadView;
- (unsigned long long)awakeFromRemoteView;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;
- (id)tokenForElement:(id)a0;
- (void)windowWillOrder:(long long)a0 relativeTo:(long long)a1;

@end
