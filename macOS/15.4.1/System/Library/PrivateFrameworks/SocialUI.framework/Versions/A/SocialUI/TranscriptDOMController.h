@class DOMDocument, TranscriptDOMEventHandler, FileTransferDOMProvider, ChatItemDOMProvider, NSAppearance, NSMutableDictionary, FileTransferEventHandler, TranscriptStyleController, IMTranscriptChatItem, IMMessage, DOMHTMLBodyElement;
@protocol TranscriptDOMControllerDelegate;

@interface TranscriptDOMController : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToDDElement;
@property (weak, nonatomic) id<TranscriptDOMControllerDelegate> delegate;
@property (readonly, nonatomic) NSAppearance *effectiveAppearance;
@property (retain, nonatomic) DOMDocument *DOM;
@property (retain, nonatomic) DOMHTMLBodyElement *body;
@property (retain, nonatomic) ChatItemDOMProvider *domProvider;
@property (retain, nonatomic) FileTransferDOMProvider *fileTransferDomProvider;
@property (weak, nonatomic) TranscriptStyleController *styleController;
@property (retain, nonatomic) TranscriptDOMEventHandler *eventHandler;
@property (retain, nonatomic) FileTransferEventHandler *fileTransferEventHandler;
@property (retain, nonatomic) IMTranscriptChatItem *lastChatItem;
@property (retain, nonatomic) IMMessage *lastMessage;
@property (nonatomic) BOOL isAnimatingReceipt;
@property (nonatomic) BOOL allowsPlugins;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTextSize:(long long)a0;
- (void)resetTextSize;
- (void)removeChatItem:(id)a0;
- (void)_anonymizeChatWindow:(id)a0;
- (void)_setChatItemGroupAttributes:(id)a0;
- (BOOL)_shouldOverrideSelectionColorForAqua;
- (void)_visitDOMNode:(id)a0 stop:(BOOL *)a1 visitor:(id /* block */)a2;
- (void)appendChatItem:(id)a0 chat:(id)a1;
- (void)dateFormatDidChange;
- (void)emptyBody;
- (id)initWithTranscriptStyleController:(id)a0;
- (void)insertChatItem:(id)a0 betweenPreviousItem:(id)a1 andNextItem:(id)a2 chat:(id)a3;
- (void)moveChatItemGUID:(id)a0 toBetweenPreviousItem:(id)a1 andNextItem:(id)a2;
- (void)rebuildChatItem:(id)a0 chat:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfChatItemWithGUID:(id)a0;
- (void)removeChatItemWithGUID:(id)a0;
- (void)setNameStyle;
- (void)setWatchMessageAddressing:(BOOL)a0;
- (void)showMyPicture;
- (void)showNames;
- (void)showNamesAndPictures;
- (void)showPictures;
- (void)updateOldElement:(id)a0 toMatchNewElement:(id)a1;
- (void)visitAllDOMElements:(id /* block */)a0;

@end
