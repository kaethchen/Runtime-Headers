@class NSAppleEventDescriptor, OSALanguage, NSUndoManager, OSAScript;

@interface OSAScriptControllerPrivate : NSObject {
    OSAScript *_script;
    OSALanguage *_language;
    NSAppleEventDescriptor *_defaultTarget;
    long long _scriptState;
    NSUndoManager *_undoManager;
    BOOL _shouldCancelExecution;
    BOOL _isCompiling;
}

- (void)dealloc;
- (id)init;

@end
