@class AMApplicationDefinition;

@interface AMNewFindItemsAction : AMAppleScriptAction

@property (retain) AMApplicationDefinition *applicationDefinition;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateName;
- (id)initWithDefinition:(id)a0 fromArchive:(BOOL)a1;
- (void)updateNameForApplication:(id)a0 findingName:(id)a1;

@end
