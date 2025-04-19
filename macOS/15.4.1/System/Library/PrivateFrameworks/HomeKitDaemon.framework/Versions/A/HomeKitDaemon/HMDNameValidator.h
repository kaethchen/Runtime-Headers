@class NSUUID, NSMutableDictionary, NSPredicate;

@interface HMDNameValidator : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *namespaceList;
@property (retain, nonatomic) NSUUID *homeManagerUUID;
@property (retain, nonatomic) NSPredicate *nonZeroLengthPredicate;

+ (id)allowedInitialCharacters;
+ (id)allowedMiddleCharacters;
+ (id)allowedTerminalCharacters;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)addNamespace:(id)a0;
- (id)validateName:(id)a0;
- (id)_addName:(id)a0 namespace:(id)a1;
- (id)_addNamespace:(id)a0;
- (id)_checkForConflict:(id)a0 namespace:(id)a1;
- (id)_removeName:(id)a0 namespace:(id)a1;
- (id)_removeNamespace:(id)a0;
- (id)_replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)_validateName:(id)a0;
- (id)addActionSetName:(id)a0 namespace:(id)a1;
- (id)addName:(id)a0 namespace:(id)a1;
- (id)addName:(id)a0 namespace:(id)a1 voiceShortcutCheck:(BOOL)a2;
- (id)checkForConflict:(id)a0 namespace:(id)a1;
- (id)despaceName:(id)a0;
- (id)nameByTrimmingDisallowedCharactersFromName:(id)a0;
- (id)removeName:(id)a0 namespace:(id)a1;
- (id)removeNamespace:(id)a0;
- (id)replaceActionSetName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2 voiceShortcutCheck:(BOOL)a3;

@end
