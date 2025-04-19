@class NSString;

@interface OSAKeywordCompletionItem : NSObject <OSACompletionItem> {
    NSString *_keyword;
}

- (void)dealloc;
- (id)name;
- (id)icon;
- (id)displayText;
- (id)descriptionText;
- (id)completionText;
- (id)initWithKeyword:(id)a0;

@end
