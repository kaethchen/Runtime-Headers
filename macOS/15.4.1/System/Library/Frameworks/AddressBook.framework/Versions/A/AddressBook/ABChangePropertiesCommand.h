@class NSArray, NSDictionary, ABPerson, ABGroup;

@interface ABChangePropertiesCommand : ABCommand {
    NSDictionary *_properties;
    NSArray *_parents;
    ABPerson *_person;
    ABGroup *_selectedGroup;
}

- (void).cxx_destruct;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)_undoRedoChangeProperties;
- (id)initWithGroup:(id)a0 person:(id)a1 properties:(id)a2 addressBook:(id)a3;

@end
