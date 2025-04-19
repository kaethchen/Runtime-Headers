@interface SGTMailboxSuggestion : SGTSuggestion

+ (id)mailboxCategory;

- (BOOL)_shouldNotBeIncludedInRecents;
- (id)initWithMailboxName:(id)a0;
- (id)queryStringFragment;

@end
