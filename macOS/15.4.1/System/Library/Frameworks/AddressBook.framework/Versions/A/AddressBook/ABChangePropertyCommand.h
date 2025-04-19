@class NSString, ABInputController, ABPerson;

@interface ABChangePropertyCommand : ABCommand {
    NSString *_propertyPath;
    id _oldValue;
    id _newValue;
    ABPerson *_person;
    ABInputController *_controller;
}

- (id)description;
- (void).cxx_destruct;
- (void)setNewValue:(id)a0;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (id)initWithPerson:(id)a0 propertyPath:(id)a1 oldValue:(id)a2 inputController:(id)a3;
- (id)propertyPath;

@end
