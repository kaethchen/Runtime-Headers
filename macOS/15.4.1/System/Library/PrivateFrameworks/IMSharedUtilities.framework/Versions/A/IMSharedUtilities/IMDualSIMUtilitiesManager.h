@class NSDictionary;

@interface IMDualSIMUtilitiesManager : NSObject

@property (class, readonly, nonatomic) IMDualSIMUtilitiesManager *sharedManager;

@property (retain, nonatomic) NSDictionary *conversationListSIMShortNameDictionary;

+ (id)_updateConversationListSIMShortNamesDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)_handleSIMSubscriptionsUpdate;
- (id)activeSIMIDs;
- (id)shortNameForSIMLabel:(id)a0;

@end
