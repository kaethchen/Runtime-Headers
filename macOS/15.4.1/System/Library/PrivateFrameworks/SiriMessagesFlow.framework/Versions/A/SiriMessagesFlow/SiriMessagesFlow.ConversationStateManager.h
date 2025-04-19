@interface SiriMessagesFlow.ConversationStateManager : SiriMessagesFlow.SharedObjectsHolder {
    void /* unknown type, empty encoding */ conversations;
    void /* unknown type, empty encoding */ readingRequestContext;
    void /* unknown type, empty encoding */ componentReadingHistory;
    void /* unknown type, empty encoding */ messageRegistry;
    void /* unknown type, empty encoding */ conversationEventStore;
    void /* unknown type, empty encoding */ processedContentCache;
    void /* unknown type, empty encoding */ isLongMessageCache;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ smartRepliesCaptioner;
    void /* unknown type, empty encoding */ announceHintExperimentController;
    void /* unknown type, empty encoding */ conversationIDToIndex;
    void /* unknown type, empty encoding */ componentIDToConversationInfo;
    void /* unknown type, empty encoding */ notificationIDs;
    void /* unknown type, empty encoding */ isOfflineMode;
    void /* unknown type, empty encoding */ currentConversation;
    void /* unknown type, empty encoding */ hasShortenedMessage;
    void /* unknown type, empty encoding */ omittedContentForMultilingual;
    void /* unknown type, empty encoding */ isRepeatRequest;
    void /* unknown type, empty encoding */ ttsUtil;
    void /* unknown type, empty encoding */ summaryProvider;
}

@end
