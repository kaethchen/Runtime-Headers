@class NSMutableDictionary, NSArray, NSString, IMDService, NSObject;
@protocol OS_dispatch_queue;

@interface IMDFilteringController : NSObject <IMDRelayPushHandlerListener>

@property (nonatomic) BOOL hasSpamExtensionUpdated;
@property (retain, nonatomic) NSMutableDictionary *spamBlockMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)account;
- (id)relayController;
- (void)_categorizeRelayMessageWithCategory:(long long)a0 subCategory:(long long)a1 deviceID:(id)a2 completion:(id /* block */)a3;
- (void)_checkAndUpdateFilterParamsForFilterExtension;
- (void)_checkAndUpdateSMSFilteringSettingsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
- (void)_checkAndUpdateSMSSpamFilterExtensionForUnregisteredOrUpdatedPlugins:(id)a0 arePluginsRegistered:(BOOL)a1;
- (void)_clearSpamMapForMessageGUID:(id)a0;
- (id)_createNewChatIdentifierFromChatIdentifier:(id)a0 andCategoryLabel:(id)a1;
- (void)_disableSpamFiltering;
- (void)_disableSpamFilteringAndRelay;
- (void)_enableSpamFiltering;
- (void)_executeSpamCompletionBlockForMessageGuid:(id)a0 category:(long long)a1 subCategory:(long long)a2 receivedViaRelay:(BOOL)a3;
- (id)_getSpamExtensionID;
- (id)_getSpamExtensionName;
- (BOOL)_isMessageCategorized:(long long)a0;
- (BOOL)_isSpamFilteringEnabled;
- (id)_newSMSFilteringSettingsDictForFilterState:(long long)a0;
- (void)_processReceivedSMSFilteringSettingsDictionary:(id)a0 deviceID:(id)a1;
- (void)_processReceivedSMSFilteringSettingsDictionaryInBlastDoor:(id)a0 deviceID:(id)a1;
- (void)_processReceivedSMSFilteringSettingsMessage:(id)a0 deviceID:(id)a1;
- (void)_relaySMSFilteringSettingsForFilterState:(long long)a0;
- (BOOL)_storeSpamCompletionBlock:(id /* block */)a0 forMessageGUID:(id)a1;
- (void)_updateFilterParamsForFilterExtension;
- (void)_updateSpamFilteringState:(long long)a0;
- (void)handler:(id)a0 incomingSMSFilteringSettingsMessage:(id)a1 fromToken:(id)a2;

@end
