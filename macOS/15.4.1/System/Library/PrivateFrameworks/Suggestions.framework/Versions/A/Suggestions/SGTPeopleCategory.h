@interface SGTPeopleCategory : SGTCategory {
    BOOL forRecipients;
}

- (id)attributeNamesForRawSuggestion;
- (id)displayNameForRawSuggestionInMenu:(id)a0;
- (id)initForRecipients:(BOOL)a0;

@end
