@class NSString;

@interface PKInstallScriptMutation : NSObject {
    BOOL _dropSIP;
    BOOL _skip;
    NSString *_scriptPath;
    NSString *_mutationToPerform;
}

- (void)dealloc;

@end
