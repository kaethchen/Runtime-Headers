@class NSString, NSArray;

@interface PKInstallScriptAction : NSObject {
    BOOL _droppingSIP;
    BOOL _skipScript;
    BOOL _performRelativePathTransformation;
    NSString *_scriptRelativePath;
    NSArray *_componentPackageIdentifierExpressions;
    NSString *_mutationNameToPerform;
}

- (void)dealloc;

@end
