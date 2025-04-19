@class ABGroup, NSPasteboard;

@interface ABBookGroupCopyCommand : ABBookCommand {
    NSPasteboard *_pasteboard;
    ABGroup *_group;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithPasteboard:(id)a0 group:(id)a1;
- (id)pasteboardData;

@end
