@class NSPasteboard;
@protocol ABPasteboardData;

@interface ABPasteboardWriteCommand : ABBookCommand

@property (readonly) NSPasteboard *pasteboard;
@property (readonly) id<ABPasteboardData> pasteboardData;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithPasteboard:(id)a0 pasteboardData:(id)a1;

@end
