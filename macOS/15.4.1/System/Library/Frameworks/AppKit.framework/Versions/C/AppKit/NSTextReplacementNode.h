@class NSString;

@interface NSTextReplacementNode : NSObject {
    NSString *curString;
    NSString *replacementString;
    unsigned long long replacementFlags;
    NSTextReplacementNode *children[28];
}

- (void)dealloc;

@end
