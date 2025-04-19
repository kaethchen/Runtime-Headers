@class OSADocumentationDefinition, NSMutableArray;

@interface OSASuiteDefinition : OSADefinition {
    NSMutableArray *_typeDefinitions;
    NSMutableArray *_classDefinitions;
    NSMutableArray *_commandDefinitions;
    NSMutableArray *_eventDefinitions;
    OSADocumentationDefinition *_documentation;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)itemKind;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (BOOL)isExpandable;
- (id)itemIcon;
- (id)typeDefinitions;
- (void)addClassDefinition:(id)a0;
- (void)addCommandDefinition:(id)a0;
- (void)addEventDefinition:(id)a0;
- (id)classDefinitions;
- (id)commandDefinitions;
- (id)eventDefinitions;
- (BOOL)isOutlinable;
- (void)setClassDefinitions:(id)a0;
- (void)setCommandDefinitions:(id)a0;
- (void)setEventDefinitions:(id)a0;
- (void)setTypeDefinitions:(id)a0;

@end
