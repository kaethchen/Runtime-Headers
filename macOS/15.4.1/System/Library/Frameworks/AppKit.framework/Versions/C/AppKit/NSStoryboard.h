@class NSString, NSBundle, NSDictionary, NSMutableDictionary, NSArray;

@interface NSStoryboard : NSObject {
    NSBundle *_bundle;
    NSString *_storyboardFileName;
    NSDictionary *_identifierToNibNameMap;
    NSDictionary *_identifierToExternalStoryboardReferenceMap;
    NSDictionary *_identifierToUUIDMap;
    NSString *_designatedEntryPointIdentifier;
    NSMutableDictionary *_identifierToUINibMap;
    NSString *_mainMenu;
    NSArray *_topLevelObjects;
    NSBundle *_ownerBundle;
}

@property (class, readonly) NSStoryboard *mainStoryboard;

+ (id)storyboardWithName:(id)a0 bundle:(id)a1;

- (id)debugDescription;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)containingBundle;
- (id)nibForControllerWithIdentifier:(id)a0;
- (BOOL)_hasInitialController;
- (id)_instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1 storyboardSegueTemplate:(id)a2 sender:(id)a3;
- (void)_instantiateMainMenu:(id)a0;
- (id)_referencedStoryboardForExternalReferenceInfo:(id)a0;
- (BOOL)containsNibNamed:(id)a0;
- (id)initWithBundle:(id)a0 storyboardFileName:(id)a1 identifierToNibNameMap:(id)a2 identifierToExternalStoryboardReferenceMap:(id)a3 identifierToUUIDMap:(id)a4 designatedEntryPointIdentifier:(id)a5 mainMenu:(id)a6;
- (id)initWithName:(id)a0 bundle:(id)a1;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)instantiateControllerWithIdentifier:(id)a0;
- (id)instantiateControllerWithIdentifier:(id)a0 creator:(id /* block */)a1;
- (id)instantiateInitialController;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0;
- (id)instantiateInitialControllerWithCreator:(id /* block */)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)nibForStoryboardNibNamed:(id)a0;
- (id)storyboardBundle;
- (id)storyboardFileName;
- (id)uniqueIDForControllerIdentifier:(id)a0;

@end
