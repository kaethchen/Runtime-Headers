@class NSCharacterSet, NSMutableDictionary, SCROutputManager, SCRHIDProperties, SCRWorkspace, SCRCTargetSelectorTimer, SCRGestureFactory, NSString, NSSet, SCRCIndexMap, SCRKeyboardKey, SCREventCapsLockDetector, AXSSEventManager, SCRBezelServicesManager, SCRCUserDefaults, SCREvent, AXSSActionManager, NSMutableSet;

@interface SCREventFactory : NSObject <SCRCursorAutoHideDelegate, AXFUserSessionObserverDelegate> {
    unsigned long long _modifierMask;
    unsigned int _lastCGSModifierFlags;
    SCRCUserDefaults *_keyboardDomain;
    SCRCTargetSelectorTimer *_keyRepeatTimer;
    SCREvent *_keyRepeatEvent;
    SCRCTargetSelectorTimer *_modifierKeyTimer;
    long long _eventTag;
    SCRKeyboardKey *_escapeKey;
    double _lastKeyPressTime;
    NSSet *_repeatCommands;
    SCRCIndexMap *_repeatInfo;
    SCRCTargetSelectorTimer *_commandsTimer;
    int _hotKeyDownCount;
    unsigned int _cgsConnection;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _keyboardPSN;
    unsigned long long _kbCommanderModifierKey;
    unsigned long long _fastSearchModifierKey;
    struct __CFMachPort { } *_eventTap;
    unsigned long long _eventTapReconnectCount;
    double _eventTapLastReconnect;
    struct __CGEventTapProxy { } *_eventTapProxy;
    SCRCTargetSelectorTimer *_invertedTKeyTimer;
    unsigned long long _invertedTStateMask;
    unsigned long long _lastRepeatedMask;
    unsigned long long _invertedTLastDownState;
    SCRCTargetSelectorTimer *_invertedTArrowRepostTimer;
    NSCharacterSet *_singleKeyQuickNavValidLetters;
    BOOL _alreadyToggledArrowKeyQuickNav;
    BOOL _modifierLockedForNextEvent;
    NSMutableSet *_downKeySet;
    SCRHIDProperties *_hidProperties;
    struct { long long lastState; BOOL isTrackpadCommanderEnabled; BOOL isDisablingAllTrackpadInput; unsigned long long continuityHash; long long continuityZone; double continuityDistance; double continuityThreshold; unsigned long long repeatHash; unsigned long long pressRepeatHash; struct CGPoint { double x; double y; } trackingLocation; double lastEventTime; double lastCommandTime; double lastClickTime; double lastCursorUpdateTime; double lastGestureEventTime; BOOL isCursorHidden; BOOL snarfingEvents; struct CGPoint { double x; double y; } cursorLocation; BOOL tapDragEnabled; double tapDragStartTime; unsigned long long mouseDownCount; BOOL mouseDownIsRight; unsigned long long fingerCount; unsigned long long tapCount; long long axisDirection; BOOL isControlled; BOOL isCommanded; long long rotorSoundZone; BOOL requireUp; BOOL onlySpeakWhenTouching; BOOL isInPassthruTouchMode; struct CGPoint { double x; double y; } passthruTouchStartPoint; } _gesture;
    SCRCTargetSelectorTimer *_mouseDownTimer;
    SCRCIndexMap *_uniCharToVirtualKeysMap;
    unsigned long long _repostedMacKeyCode;
    struct { unsigned char controlOnly : 1; unsigned char eventCaptureEnabled : 1; unsigned char fastSearchEnabled : 1; unsigned char invalid : 1; unsigned char kbCommanderEnabled : 1; unsigned char kbCommanderTracking : 1; unsigned char keyboardPassthruEnabled : 1; unsigned char inKeyboardCaptureDialog : 1; unsigned char modalSessionEnabled : 1; unsigned char numPadCommanderEnabled : 1; unsigned char quickNavOverridesSelectionEvents : 1; unsigned char speakAfterTextInsertionEnabled : 1; unsigned char vocFollowsKeyWindow : 1; unsigned char arrowKeyQuickNavEnabled : 1; unsigned char singleKeyQuickNavEnabled : 1; unsigned char arrowKeyQuickNavTemporarilyDisabled : 1; unsigned char singleKeyQuickNavTemporarilyDisabled : 1; unsigned char leftRightQuickNavDoesSomething : 1; unsigned char exploreAllElementsEnabled : 1; } _flags;
    struct __CFRunLoopSource { } *_eventTapSource;
    NSMutableDictionary *_trackpadGestureFactories;
    SCRGestureFactory *_currentGestureFactory;
    NSString *_lastCommandKey;
    NSString *_lastGestureKey;
    NSString *_tapDragCommand;
}

@property (nonatomic) unsigned long long repostedMacKeyCode;
@property (nonatomic, getter=isExternalPassthroughEnabled) BOOL externalPassthroughEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=_setKeysToUseForVOModifier:) long long _keysToUseForVOModifier;
@property (readonly, nonatomic) BOOL _isVOModifierPressed;
@property (nonatomic, setter=_setControlAndOptionPressed:) BOOL _isControlAndOptionPressed;
@property (retain, nonatomic, setter=_setCapsLockDetector:) SCREventCapsLockDetector *_capsLockDetector;
@property (retain, nonatomic) NSString *_lastQuickNavCommand;
@property (nonatomic) unsigned long long _lastQuickNavArrowKeyDownEventTime;
@property (nonatomic, setter=_setVOModifierTemporarilyUnlocked:) BOOL _isVOModifierTemporarilyUnlocked;
@property (nonatomic) long long _syntheticEscapeKeyState;
@property (readonly, nonatomic) SCROutputManager *_outputManager;
@property (nonatomic, setter=_setInitializationState:) unsigned char _initializationState;
@property (nonatomic) BOOL eventReroutedToExternalFrameworks;
@property (retain, nonatomic) AXSSEventManager *axssEventManager;
@property (retain, nonatomic) AXSSActionManager *axssActionManager;
@property (nonatomic) BOOL modifierDelayElapsed;
@property (nonatomic) BOOL isProcessingTrackpadCommanderGesture;
@property (readonly, weak, nonatomic) SCRWorkspace *_workspaceDelegate;
@property (nonatomic, setter=_setTrackpadCommanderControlOptionOnHash:) unsigned long long _trackpadCommanderControlOptionOnHash;
@property (nonatomic, setter=_setTrackpadCommanderControlOptionOffHash:) unsigned long long _trackpadCommanderControlOptionOffHash;
@property (nonatomic, setter=_setTrackpadCommanderCapsLockOnHash:) unsigned long long _trackpadCommanderCapsLockOnHash;
@property (nonatomic, setter=_setTrackpadCommanderCapsLockOffHash:) unsigned long long _trackpadCommanderCapsLockOffHash;
@property (readonly, nonatomic) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) BOOL isSecureInputEnabled;
@property (nonatomic) BOOL voiceOverKeysLocked;
@property (readonly, nonatomic) BOOL keyboardCommanderEnabled;
@property (nonatomic) BOOL singleKeyQuickNavTemporarilyDisabled;
@property (nonatomic) BOOL arrowKeyQuickNavTemporarilyDisabled;
@property (nonatomic) BOOL quickNavOverridesSelectionEvents;
@property (readonly, nonatomic) SCRBezelServicesManager *bezelServicesManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isSecurityApprovedEvent:(struct __CGEvent { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleEvent:(struct __CGEvent { } *)a0;
- (void)_hideCursor;
- (void)_showCursor;
- (void)_updateSecureInputState;
- (BOOL)eventManager:(id)a0 shouldRepostEvent:(id)a1;
- (void)eventManager:(id)a0 repostEvent:(id)a1;
- (void)userSessionObserverScreenSaverDidStart:(id)a0;
- (void)userSessionObserverScreenSaverDidStop:(id)a0;
- (void)gestureGutterUpCallbackWithFactory:(id)a0;
- (void)gestureSplitTappingCallbackWithFactory:(id)a0;
- (void)gestureTappingCallbackWithFactory:(id)a0;
- (void)gestureTrackingCallbackWithFactory:(id)a0;
- (BOOL)shouldBlockSplitTapGestureWithFactory:(id)a0;
- (void)completeInitialization;
- (void)_cancelCommands;
- (void)_repeatCommands;
- (void)_updateTextCursorFeedbackOption;
- (BOOL)_dispatchQuickNavCommandForKey:(id)a0;
- (struct __CGEvent { } *)_handleTapEvent:(struct __CGEvent { } *)a0 type:(unsigned int)a1 withProxy:(struct __CGEventTapProxy { } *)a2;
- (void)_delayedHandleEvent:(id)a0;
- (void)_delayedWorkspaceDidChange;
- (void)_enableTrackpadsFromPreferences:(BOOL)a0;
- (unsigned long long)_fetchAvailableModifiers:(struct __CGEvent { } *)a0;
- (id)_gestureCommander;
- (BOOL)_handleArrowKeyQuickNavEvent:(struct __CGEvent { } *)a0;
- (void)_handleArrowKeyQuickNavInvertedTPress;
- (BOOL)_handleFastSearchEvent:(struct __CGEvent { } *)a0;
- (void)_handleFinalKeyRepeat;
- (BOOL)_handleGestureCommanderEvent:(struct __CGEvent { } *)a0;
- (BOOL)_handleGestureEvent:(struct __CGEvent **)a0 type:(unsigned int)a1;
- (void)_handleHIDDetectionNotification:(id)a0;
- (void)_handleInvertedTDownArrowRepostPress:(id)a0;
- (void)_handleKeyUp:(struct __CGEvent { } *)a0;
- (BOOL)_handleKeyboardCommanderEvent:(struct __CGEvent { } *)a0 eventType:(unsigned int)a1;
- (void)_handleModifierKeyPressed;
- (void)_handleOptionRightArrow;
- (BOOL)_handleQuickNavEvent:(struct __CGEvent { } *)a0;
- (BOOL)_handleSingleKeyQuickNavEvent:(struct __CGEvent { } *)a0;
- (BOOL)_handleTimeMachineNumPadEvent:(struct __CGEvent { } *)a0;
- (void)_initializeModifierState;
- (void)_initializeTrackpads;
- (void)_invalidateEventTap;
- (void)_invalidateTrackpads;
- (BOOL)_isVOLocked;
- (void)_issueDisconnectSound;
- (id)_keyChordForExitingTextMode;
- (void)_manageModifierAlternatesWithMask:(unsigned long long)a0 event:(struct __CGEvent { } *)a1 wasDown:(BOOL)a2 areDown:(BOOL)a3;
- (void)_modifierKeyPressed;
- (void)_observeValueForKeyPath:(id)a0;
- (void)_postProcessEventForFactory:(id)a0;
- (void)_processCommands:(id)a0 withInfo:(id)a1 isDown:(BOOL)a2 isRepeating:(BOOL)a3;
- (void)_processForFactory:(id)a0 gestureString:(id)a1 directionString:(id)a2 countString:(id)a3 argument:(id)a4 continuous:(BOOL)a5 resetCursor:(BOOL)a6;
- (void)_processIdle;
- (void)_processKeyString:(id)a0 withModifierMask:(id)a1 completion:(id /* block */)a2;
- (void)_processModifierMask:(unsigned long long)a0 modifierFlags:(unsigned long long *)a1 down:(BOOL)a2;
- (void)_processMouseDown;
- (void)_processPassthruTouchStart:(BOOL)a0;
- (void)_processPreCommand;
- (BOOL)_processPressEventWithGestureString:(id)a0 failSilently:(BOOL)a1 modifierMask:(unsigned long long)a2 ignoreHelp:(BOOL)a3;
- (void)_processRegularKey:(id)a0 commands:(id)a1 info:(id)a2 repeating:(BOOL)a3 originallyFromCommander:(BOOL)a4;
- (void)_processTrackWithFactory:(id)a0;
- (void)_processVirtualKey:(id)a0 withModifierMask:(id)a1;
- (id)_quickNavCommands;
- (BOOL)_registerForCGEvents;
- (void)_reloadCommandMap;
- (void)_setEventListenMasksForKeyboard:(BOOL)a0 mouse:(BOOL)a1;
- (void)_setNumPadCommanderEngineEnabled:(BOOL)a0;
- (void)_setSecureInputEnabled:(BOOL)a0;
- (void)_setupEventTapWithEvents:(unsigned int)a0;
- (BOOL)_shouldCapture;
- (BOOL)_shouldCaptureSystemGesture:(struct __CGEvent { } *)a0;
- (void)_showTextEditingModeInstructions;
- (unsigned int)_trackpadDisabledEventMask;
- (unsigned int)_trackpadEnabledEventMask;
- (id)_uniCharToVirtualKeysMap;
- (void)_updateBrailleQuickNavSetting;
- (void)_updateCapsLockDetection;
- (void)_updateEventCaptureFromCapsLockDetector;
- (void)_updateFastSearchPreferences;
- (void)_updateGestureSpeeds;
- (void)_updateKeyboardCommanderPreferences;
- (void)_updateKeyboardCommanderTrackingState;
- (void)_updateKeyboardCommanderTrackingStateWithStickyKey:(short)a0;
- (void)_updateKeysToUseForVOModifier;
- (void)_updateListenersBasedOnPassthruState;
- (void)_updateNumPadCommanderEnabled;
- (void)_updateQuickNavCommanderPreferences;
- (void)_updateTrackpads:(id)a0;
- (void)_workspaceDidChange;
- (BOOL)arrowKeyQuickNavEnabled;
- (BOOL)arrowKeyQuickNavTemporarilyDisabled;
- (void)clearApplicationModifiers;
- (void)clearModifierState;
- (BOOL)cursorCanAutoHide;
- (void)cursorDidHide:(BOOL)a0 forced:(BOOL)a1;
- (BOOL)cursorShouldForceHide;
- (long long)eventTag;
- (BOOL)exploreAllElementsEnabled;
- (struct __CGEvent { } *)externallyTapEvent:(struct __CGEvent { } *)a0 type:(unsigned int)a1;
- (id)initWithWorkspaceDelegate:(id)a0 userDefaults:(id)a1 outputManager:(id)a2;
- (BOOL)isCapturingGestureEvents;
- (BOOL)isModalSessionEnabled;
- (BOOL)isOnOffTrackPadCommanderGesture:(unsigned long long)a0;
- (BOOL)keyboardCommanderEnabled;
- (BOOL)keyboardPassthruEnabled;
- (double)lastModifierPress;
- (void)lockVoiceOverKeysForNextEvent;
- (BOOL)numPadCommanderEnabled;
- (void)performFKACommand:(id)a0;
- (void)postKeyboardKeyIgnoringEventTap:(unsigned short)a0 isDown:(BOOL)a1;
- (void)processCommand:(id)a0 withInfo:(id)a1;
- (void)processCommandSet:(id)a0 withInfo:(id)a1;
- (void)processKey:(id)a0 withInfo:(id)a1;
- (void)processKeyString:(id)a0 withModifierMask:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)processVirtualKey:(unsigned short)a0 withModifierMask:(unsigned long long)a1;
- (void)setArrowKeyQuickNavEnabled:(BOOL)a0;
- (void)setArrowKeyQuickNavTemporarilyDisabled:(BOOL)a0;
- (void)setEventCaptureEnabled:(BOOL)a0;
- (void)setEventTag:(long long)a0;
- (void)setExploreAllElementsEnabled:(BOOL)a0;
- (void)setInKeyboardCaptureDialog:(BOOL)a0;
- (void)setIsModalSessionEnabled:(BOOL)a0;
- (void)setKeyboardPassThruEnabled:(BOOL)a0;
- (void)setLastModifierPress:(double)a0;
- (void)setNumPadCommanderEnabled:(BOOL)a0;
- (void)setSingleKeyQuickNavEnabled:(BOOL)a0;
- (void)setSingleKeyQuickNavTemporarilyDisabled:(BOOL)a0;
- (void)setTrackpadEnabled:(BOOL)a0 forDeviceIdentifier:(unsigned long long)a1;
- (void)setUpEventReroutingToExternalFrameworks;
- (void)setupEventTap;
- (BOOL)singleKeyQuickNavEnabled;
- (BOOL)singleKeyQuickNavTemporarilyDisabled;
- (BOOL)trackpadEnabledForDeviceIdentifier:(unsigned long long)a0;
- (void)updateCapsLockModifierMask;
- (void)updateMouseCursorState;
- (void)updateSecureInputState;

@end
