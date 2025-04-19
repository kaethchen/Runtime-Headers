@class ODDLayoutVariablePropertySet;

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}

- (id)description;
- (void).cxx_destruct;
- (id)variableList;
- (void)setVariableList:(id)a0;

@end
