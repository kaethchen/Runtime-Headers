@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem> {
    NSString *_terminology;
}

- (void)dealloc;
- (id)name;
- (id)icon;
- (id)displayText;
- (id)descriptionText;
- (id)completionText;
- (id)initWithTerminology:(id)a0;

@end
