@class DOMDocument, NSMutableSet;

@interface FileTransferDOMProvider : DOMProvider

@property (readonly, weak, nonatomic) DOMDocument *DOM;
@property (retain) NSMutableSet *guidsForAllOwnedTransfers;
@property BOOL altFunction;
@property BOOL singleOptionPressed;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (BOOL)isDarkMode;
- (id)DOM;
- (void)_setThemeableSrcURL:(id)a0 forElement:(id)a1;
- (void)_configureImageSource:(id)a0 forFileTransfer:(id)a1;
- (void)_flagsChanged:(id)a0;
- (void)_userVisiblePathCreated:(id)a0;
- (void)fileTransferUpdated:(id)a0 inlineMedia:(BOOL)a1;
- (BOOL)isResponsibleForTransfer:(id)a0;
- (BOOL)isThemeableTranscriptResource:(id)a0;
- (id)parseAudioMessageWithChatItem:(id)a0 transfer:(id)a1 listenedTo:(BOOL)a2;
- (id)parseFileTransferGUID:(id)a0 filename:(id)a1 forChatItem:(id)a2;
- (id)parseFileTransferGUID:(id)a0 filename:(id)a1 width:(double)a2 height:(double)a3 forChatItem:(id)a4 outWillFillBubble:(BOOL *)a5;
- (id)parseMap:(id)a0;
- (id)parsePass:(id)a0;
- (void)setSourceForInlineMedia:(id)a0 forFileTransfer:(id)a1;
- (void)updateClassName:(id)a0 forTransfer:(id)a1;
- (void)updateDOMElement:(id)a0 forDarkAppearance:(BOOL)a1;

@end
