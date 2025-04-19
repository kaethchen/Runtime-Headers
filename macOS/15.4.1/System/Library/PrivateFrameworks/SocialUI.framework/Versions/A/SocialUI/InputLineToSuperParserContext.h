@class IMHandle, NSMutableArray;

@interface InputLineToSuperParserContext : AppKitToSuperParserContext {
    IMHandle *_handle;
    NSMutableArray *_localURLsToArchiveAndSend;
    BOOL _finished;
}

- (void).cxx_destruct;
- (id)_attributesForAttachmentWithAttributes:(id)a0;
- (id)initWithAttributedString:(id)a0 baseWritingDirection:(long long)a1 bodyBackgroundColor:(id)a2 bodyForegroundColor:(id)a3 handle:(id)a4 finished:(BOOL)a5;
- (id)localURLsToArchiveAndSend;

@end
