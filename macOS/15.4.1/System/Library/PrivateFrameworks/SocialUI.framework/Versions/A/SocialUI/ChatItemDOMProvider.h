@class DateDOMProvider, PluginStatusDOMProvider, NSMutableSet, BalloonPluginDOMProvider, CollectiveAssociatedMessagesDOMProvider, DOMDocument;

@interface ChatItemDOMProvider : DOMProvider

@property (readonly, nonatomic) CollectiveAssociatedMessagesDOMProvider *associatedMessagesDOMProvider;
@property (readonly, nonatomic) PluginStatusDOMProvider *pluginStatusDOMProvider;
@property (readonly, weak, nonatomic) DOMDocument *DOM;
@property (retain) NSMutableSet *guidsForAllOwnedTransfers;
@property BOOL altFunction;
@property BOOL singleOptionPressed;
@property (retain) DateDOMProvider *dateDOMProvider;
@property (readonly, nonatomic) BalloonPluginDOMProvider *balloonPluginDOMProvider;
@property (nonatomic) BOOL animateReceiptChanges;
@property (nonatomic) BOOL createDebugElements;

+ (void)initialize;
+ (BOOL)_hideHandlesInTranscript;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)setTextDirection:(id)a0;
- (void)selectChatItem:(id)a0;
- (id)DOM;
- (id)_parseGroupTitleChangeChatItem:(id)a0;
- (BOOL)_appendBigEmojiDivIfNeededForText:(id)a0 chatItem:(id)a1 messageTextElement:(id)a2;
- (void)_appendFaceTimeCallMessageItem:(id)a0 toElement:(id)a1 withChat:(id)a2;
- (id)_childElementFromElement:(id)a0 withTagName:(id)a1;
- (id)_compactDateStamp;
- (id)_createFaceTimeBubbleWithMessageItem:(id)a0 withChat:(id)a1;
- (id)_createPhishingMessageDOMElement;
- (id)_faceTimeButtonForFaceTimeChatItem:(id)a0 withChat:(id)a1;
- (id)_faceTimeCallHeaderElement:(id)a0;
- (id)_faceTimeCallTextElement:(id)a0;
- (id)_faceTimeIconElement;
- (id)_faceTimeInfoButtonElement:(id)a0;
- (id)_faceTimeJoinButtonElement:(id)a0;
- (id)_faceTimeTextBoxForFacetimeChatItem:(id)a0 withChat:(id)a1;
- (id)_parseBuddyIcon:(id)a0;
- (id)_parseGroupActionChatItem:(id)a0;
- (id)_parseLocationShareActionChatItem:(id)a0;
- (id)_parseMessageActionChatItem:(id)a0;
- (id)_parseMessageChatItemFlags:(id)a0 chat:(id)a1;
- (id)_parseMessageStatus:(id)a0;
- (id)_parseParticipantChangeChatItem:(id)a0;
- (id)_parseSenderChatItem:(id)a0;
- (id)_parseTypingChatItem:(id)a0;
- (void)_performBackwardRippleEffectFromElement:(id)a0 guid:(id)a1;
- (void)_performForwardRippleEffectFromElement:(id)a0 guid:(id)a1;
- (void)_performRippleEffectFromElement:(id)a0 guid:(id)a1;
- (void)_playImpactEffectForElement:(id)a0 effectID:(id)a1 itemGUID:(id)a2;
- (void)_playMomentEffectForElement:(id)a0 effectID:(id)a1 itemGUID:(id)a2;
- (id)_rootFaceTimeElementWithFaceTimeItem:(id)a0 withChat:(id)a1;
- (void)_setAnimationPropertiesOnElement:(id)a0 className:(id)a1 animationID:(id)a2 itemGUID:(id)a3;
- (BOOL)_shouldHandlePhishingAttempts;
- (id)addRTLSpacingIfNeeded:(id)a0;
- (void)beginPlayingTranscriptEffectOnElement:(id)a0 itemGUID:(id)a1 effectID:(id)a2;
- (void)deselectChatItem:(id)a0;
- (id)errorElementForMessageGuid:(id)a0;
- (void)finishAnimatingElement:(id)a0;
- (id)parseChatItem:(id)a0 chat:(id)a1;
- (id)parseDateChatItem:(id)a0;
- (void)parseEmoteChatItem:(id)a0 appendToChatItem:(id)a1;
- (void)parseExpressiveSendAsTextChatItem:(id)a0 appendToChatItem:(id)a1;
- (void)parseMessageChatItem:(id)a0 appendToChatItem:(id)a1 chat:(id)a2;
- (void)parseMessageForReplay:(id)a0 guid:(id)a1 appendToChatItem:(id)a2;
- (id)parseMessageSubject:(id)a0;
- (id)parseMessageText:(id)a0 chatItem:(id)a1 messageElement:(id)a2;
- (id)parseServiceChatItem:(id)a0;
- (void)refreshBusinessHeader:(id)a0;
- (void)updateFaceTimeMultiwayBubble:(id)a0 withChat:(id)a1;

@end
