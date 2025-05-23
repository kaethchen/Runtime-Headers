@interface CPBiomeSessionDonator : NSObject <CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ biomeStream;
    void /* unknown type, empty encoding */ biomeStreamSender;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 parentQueue:(id)a1;
- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;

@end
