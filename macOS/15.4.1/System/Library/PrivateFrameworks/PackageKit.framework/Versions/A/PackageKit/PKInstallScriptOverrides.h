@class NSArray, NSDictionary, PKTrie;

@interface PKInstallScriptOverrides : NSObject {
    NSArray *_installScriptActions;
    NSDictionary *_scriptTypeToActionIndexes;
    PKTrie *_packageIdentifiersDroppingSIP;
}

+ (id)_loadPlistNamed:(id)a0 rootClass:(Class)a1;
+ (id)_parseAndValidateInstallActionsArray:(id)a0 scriptTypesToScriptActionIndexes:(id *)a1;
+ (id)_parseTrieFromDictionary:(id)a0 key:(id)a1;

- (void)dealloc;
- (id)init;

@end
