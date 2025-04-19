@class NSString;

@interface MDMSkipKeysUtilities : NSObject

@property (retain, nonatomic) NSString *testSetupAssistantPayloadPath;

- (void).cxx_destruct;
- (id)currentSkipKeys;
- (id)_buddyPayloadKeyToSkipKeyMap;
- (id)_cloudConfigSkipKeys;
- (id)_mapBuddySettingsDictToSkipKeys:(id)a0;
- (id)_payloadSkipKeys;
- (id)_specialSkipKeys;
- (id)_validateAndUpdateSkipKeys:(id)a0;
- (BOOL)isBuddyPaneSkipped:(id)a0;

@end
