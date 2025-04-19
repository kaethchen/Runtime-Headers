@class NSMutableDictionary, AXFThrottler, NSMutableArray, NSUserDefaults;

@interface UASettings : NSObject

@property (retain, nonatomic) AXFThrottler *_notificationPostingThrottler;
@property (retain, nonatomic) NSMutableDictionary *_propertiesToUndoAndTheirOriginalValues;
@property (retain, nonatomic) NSMutableArray *_orderedPropertiesToUndo;
@property (nonatomic) BOOL _performingUndoableModifications;
@property (retain, nonatomic) NSUserDefaults *universalAccessUserDefaults;

- (void).cxx_destruct;
- (id)_init;
- (void)_postSettingsDidChangeNotification:(id)a0;
- (void)beginUndoableModifications;
- (void)commitUndoableModifications;
- (void)postSettingsDidChangeNotification:(id)a0;
- (void)postSettingsDidChangeNotification:(id)a0 info:(id)a1;
- (void)registerOriginalValue:(id)a0 forPropertyIfNotYetRegistered:(SEL)a1;
- (void)undoModifications;

@end
