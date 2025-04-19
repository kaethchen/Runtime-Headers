@interface SGTMailHasAttachmentSuggestion : SGTSuggestion

- (id)init;
- (id)_identifier;
- (long long)scope;
- (id)scopes;
- (id)tokenTitle;
- (id)_propertyListRepresentation;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)allAttributeValues;
- (id)displayNameForMenu;
- (id)displayNameForScope:(long long)a0;
- (id)queryStringFragment;

@end
