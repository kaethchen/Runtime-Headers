@class NSString;

@interface OSANameCompletionItem : NSObject <OSACompletionItem> {
    NSString *_name;
}

- (void)dealloc;
- (id)name;
- (id)initWithName:(id)a0;
- (id)icon;
- (id)displayText;
- (id)descriptionText;
- (id)completionText;

@end
