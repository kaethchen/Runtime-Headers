@class NSColor, NSArray, NSMutableArray, NSMutableAttributedString;

@interface AppKitToSuperParserContext : IMAttributedStringParserContext {
    NSMutableAttributedString *_superFormat;
    NSColor *_bodyBackgroundColor;
    NSColor *_bodyForegroundColor;
    long long _baseWritingDirection;
    BOOL _didAddBodyAttributes;
}

@property (readonly) NSMutableArray *mutableFileTransferGUIDs;
@property (readonly) NSArray *fileTransferGUIDs;

- (id)name;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)fileTransferGUIDs;
- (id)resultsForLogging;
- (id)_attributesForAttachmentWithAttributes:(id)a0;
- (id)initWithAttributedString:(id)a0 baseWritingDirection:(long long)a1 bodyBackgroundColor:(id)a2 bodyForegroundColor:(id)a3;
- (id)superFormatString;
- (void)_preloadImage:(id)a0;

@end
