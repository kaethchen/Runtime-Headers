@class NSString, NSScriptObjectSpecifier;

@interface NSPositionalSpecifierMoreIVars : NSObject {
    NSScriptObjectSpecifier *insertionContainerSpecifier;
    NSString *insertionKey;
    unsigned long long insertionPosition;
    BOOL evaluated;
    id insertionContainer;
    BOOL specifiesSetting;
    long long insertionIndex;
    BOOL insertionReplaces;
}

@end
