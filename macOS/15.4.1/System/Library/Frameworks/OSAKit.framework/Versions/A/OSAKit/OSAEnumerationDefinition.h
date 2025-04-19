@class OSADocumentationDefinition;

@interface OSAEnumerationDefinition : OSADefinition {
    OSADocumentationDefinition *_documentation;
}

- (void)dealloc;
- (id)init;
- (id)itemKind;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (id)itemIcon;

@end
