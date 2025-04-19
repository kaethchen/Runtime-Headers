@class OSAScriptController, OSAScriptParser, OSAScriptAssistant;

@interface OSAScriptViewPrivate : NSObject {
    OSAScriptController *_controller;
    OSAScriptAssistant *_scriptAssistant;
    OSAScriptParser *_parser;
    BOOL _usesScriptAssistant;
}

- (void)dealloc;
- (id)init;

@end
