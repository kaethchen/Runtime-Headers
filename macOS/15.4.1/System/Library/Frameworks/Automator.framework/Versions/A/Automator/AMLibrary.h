@class NSCountedSet, NSArray, AMGroup;

@interface AMLibrary : NSObject {
    AMGroup *_applicationsGroup;
    AMGroup *_categoriesGroup;
}

@property (class, readonly, nonatomic) AMLibrary *sharedLibrary;

@property (retain) NSCountedSet *observedGroups;
@property (retain, nonatomic) NSArray *actionsLibrary;
@property (retain, nonatomic) NSArray *variablesLibrary;
@property (retain, nonatomic) AMGroup *applicationsGroup;
@property (retain, nonatomic) AMGroup *categoriesGroup;
@property (nonatomic) unsigned long long organizationStyle;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actions;
- (void)applicationWillTerminate:(id)a0;
- (void)removeAction:(id)a0;
- (id)createActionGroups;
- (id)createActionsLibrary;
- (id)createVariableGroups;
- (id)createVariablesLibrary;
- (void)organizeAction:(id)a0 byKey:(id)a1 inGroup:(id)a2;
- (void)organizeActions:(id)a0 byKey:(id)a1 inGroup:(id)a2;
- (void)registryDidAddAction:(id)a0;
- (void)setDatesForNewActionsInPath:(id)a0;
- (void)writeGroupsForContext:(void *)a0;

@end
