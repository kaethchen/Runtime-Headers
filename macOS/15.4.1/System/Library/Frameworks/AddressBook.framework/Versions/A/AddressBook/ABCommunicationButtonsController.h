@class NSString, CNFuture, NSArray, NSMutableDictionary, CNContact, ABFaceTimeCommunicationsBridge, NSStackView, NSMutableArray, NSButton;
@protocol ABFaceTimeDataSource, CNSchedulerProvider, CNUIUserActionListDataSource;

@interface ABCommunicationButtonsController : NSObject <ABFaceTimeCommunicationsBridgeDelegate, CNUIUserActionListConsumer>

@property (retain, nonatomic) NSStackView *communicationButtonsRow;
@property (retain, nonatomic) ABFaceTimeCommunicationsBridge *bridge;
@property (weak, nonatomic) id<ABFaceTimeDataSource> dataSource;
@property (nonatomic) BOOL availableForFaceTime;
@property (retain, nonatomic) CNFuture *availabilityFuture;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (weak, nonatomic) id<CNUIUserActionListDataSource> actionsDataSource;
@property (retain, nonatomic) NSMutableDictionary *modelsByType;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSButton *faceTimeVideoButton;
@property (readonly, nonatomic) NSButton *faceTimeAudioButton;
@property (readonly, nonatomic) NSArray *allButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phoneEndpointsFromPhoneNumbers:(id)a0;
+ (id)communicationEndpointsFromPhoneNumbers:(id)a0 emailAddresses:(id)a1;
+ (id)emailEndpointsFromEmailAddresses:(id)a0;
+ (id)faceTimeAudioImageWrapper;
+ (id)faceTimeImageWrapper;
+ (BOOL)isIdentifierFromCuratedSource:(id)a0;
+ (id)uniqueIdentifiersSuitableForAvailabilityLookupFromIdentifiers:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelTokens;
- (void)prepareForUpdates;
- (void)buildCommunicationsRowStackView;
- (void)loadActionModel;
- (void)adjustStateOfButton:(id)a0;
- (void)adjustStateOfButton:(id)a0 enabled:(BOOL)a1;
- (void)adjustStateOfButtonForActionType:(id)a0;
- (void)adjustStateOfButtons;
- (id)attributedTitleForFaceTimeActionItem:(id)a0;
- (void)buildFaceTimeAudioButton;
- (void)buildFaceTimeButton;
- (void)buildLabelForButton:(id)a0;
- (id)callRelayPhoneNumberItems;
- (id)communicationEndpoints;
- (void)faceTimeAudioActionItemChosen:(id)a0;
- (void)faceTimeAudioItemChosen:(id)a0;
- (id)faceTimeAudioMenuItem;
- (void)faceTimeCommunicationsBridge:(id)a0 faceTimeAvailabilityChaged:(BOOL)a1 forContactWithIdentifier:(id)a2;
- (id)faceTimeMenuItemsFromModelForActionType:(id)a0;
- (id)faceTimeMenuItemsWithHeaderFromModelForActionType:(id)a0;
- (void)faceTimeVideoActionItemChosen:(id)a0;
- (void)handleFaceTimeAudioPressedRightClick:(BOOL)a0;
- (void)handleFaceTimeButtonPressedRightClick:(BOOL)a0;
- (BOOL)hasActionsForActionType:(id)a0;
- (id)initWithFaceTimeBridge:(id)a0 dataSource:(id)a1 actionsDataSource:(id)a2 contact:(id)a3;
- (void)loadCachedModels;
- (void)makeFaceTimeCallWithButton:(id)a0;
- (void)makeTelephonyCallWithItem:(id)a0;
- (id)menuItemForActionItem:(id)a0 actionType:(id)a1;
- (void)performAction:(id)a0 forType:(id)a1;
- (void)performActionForButton:(id)a0;
- (void)performRightClickActionForButton:(id)a0;
- (void)setModel:(id)a0 forType:(id)a1;
- (BOOL)shouldShowFaceTimeMenuForActionType:(id)a0;
- (BOOL)shouldShowTelephonyMenu;
- (BOOL)shouldUseSingleEndpoint;
- (void)showFaceTimeMenuForButton:(id)a0;
- (void)showTelephonyMenu;
- (void)startAvailabilityLookup;
- (void)stopAvailabilityLookup;

@end
