@class _NSMenuKeyResults;

@interface _NSCheckMenuData : NSObject {
    BOOL _isEventKeyValid;
    BOOL _isAutoRepeatEvent;
    BOOL _needsCaching;
    BOOL _recordResults;
    unsigned int _menuDepth;
    unsigned int _initialContext;
    struct OpaqueEventRef { } *_keyEvent;
    double _eventTime;
    unsigned long long _eventRawModifiers;
    unsigned long long _eventModifiers;
    unsigned long long _virtualKeyEventModifiers;
    unsigned long long _eventKey;
    unsigned long long _eventChar;
    struct { unsigned short keyEventAltCharacter; unsigned short keyEventCharWithoutCmdKey; unsigned short keyEventCharWithoutShiftKey; BOOL requiresCmdKeyModifier; } _keData;
    unsigned int _options;
    _NSMenuKeyResults *_virtualKeyMatch;
    _NSMenuKeyResults *_charCodeMatch;
}

- (void).cxx_destruct;
- (BOOL)ignoresSubmenus;
- (unsigned long long)altChar;
- (BOOL)excludesNSMenus;
- (unsigned long long)charWithoutCmd;
- (unsigned long long)charWithoutShift;
- (BOOL)includesDisabledItems;
- (BOOL)includesUncountedItems;
- (BOOL)isQueryOnly;
- (BOOL)isSimpleCheck;
- (BOOL)requiresCmdKey;

@end
