@class NSMutableDictionary, NSString, NSMutableArray, OSADocumentationDefinition;

@interface OSAClassDefinition : OSADefinition {
    NSMutableArray *_propertyDefinitions;
    NSMutableArray *_elementDefinitions;
    NSMutableArray *_respondsToCommandDefinitions;
    NSMutableArray *_respondsToEventDefinitions;
    NSMutableDictionary *_subclassDefinitions;
    OSADocumentationDefinition *_documentation;
    NSString *_inheritsClassName;
}

- (void)dealloc;
- (id)description;
- (id)itemKind;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (id)propertyDefinitions;
- (id)itemIcon;
- (id)pluralName;
- (void)addRespondsToCommandDefinition:(id)a0;
- (void)addElementDefinition:(id)a0;
- (void)addPropertyDefinition:(id)a0;
- (void)addRespondsToEventDefinition:(id)a0;
- (id)elementDefinitions;
- (id)inherits;
- (id)inheritsClassName;
- (id)initWithDictionary:(id)a0 suiteDefinition:(id)a1;
- (BOOL)isOutlinable;
- (id)respondsToCommandDefinitions;
- (id)respondsToEventDefinitions;
- (void)setElementDefinitions:(id)a0;
- (void)setInherits:(id)a0;
- (void)setInheritsClassName:(id)a0;
- (void)setPluralName:(id)a0;
- (void)setPropertyDefinitions:(id)a0;
- (void)setRespondsToCommandDefinitions:(id)a0;
- (void)setRespondsToEventDefinitions:(id)a0;
- (void)setSubclassDefinitions:(id)a0;
- (id)subclassDefinitions;

@end
