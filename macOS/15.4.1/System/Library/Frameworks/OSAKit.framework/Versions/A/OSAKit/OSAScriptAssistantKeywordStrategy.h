@class NSArray;

@interface OSAScriptAssistantKeywordStrategy : OSAScriptAssistantStrategy {
    NSArray *_keywords;
}

- (void)dealloc;
- (id)_keywordCompletionItemsForKeywords:(id)a0;
- (BOOL)getItems:(id *)a0 withInfoString:(id)a1;
- (id)initWithScriptView:(id)a0;

@end
