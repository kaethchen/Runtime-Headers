@class _SFPBShareCommand, _SFPBPerformPersonEntityQueryCommand, _SFPBPerformContactActionCommand, _SFPBCallCommand, _SFPBExecuteMenuItemCommand, _SFPBUpdateSearchQueryCommand, _SFPBInvokeSiriCommand, _SFPBClearProactiveCategoryCommand, _SFPBPerformEntityQueryCommand, _SFPBRunVoiceShortcutCommand, _SFPBShowPurchaseRequestSheetCommand, _SFPBToggleAudioCommand, _SFPBRejectPeopleInPhotoCommand, _SFPBFlightCheckinCommand, _SFPBToggleWatchListStatusCommand, _SFPBIndexedUserActivityCommand, _SFPBSearchWebCommand, _SFPBSearchInAppCommand, _SFPBOpenCalculationCommand, _SFPBEmailCommand, _SFPBLaunchAppCommand, _SFPBCreateReminderCommand, _SFPBTopic, _SFPBExecuteToolCommand, _SFPBUpdateSportsFollowingStatusCommand, _SFPBPerformIntentCommand, _SFPBCreateContactCommand, _SFPBRequestUserReportCommand, NSData, _SFPBRequestProductPageCommand, _SFPBShowAppStoreSheetCommand, _SFPBShowScreenTimeRequestSheetCommand, _SFPBShowContactCardCommand, _SFPBOpenWebClipCommand, _SFPBShowPhotosOneUpViewCommand, _SFPBBeginMapsRoutingCommand, _SFPBAddToPhotosLibraryCommand, _SFPBOpenMediaCommand, _SFPBCommandReference, _SFPBOpenPunchoutCommand, _SFPBOpenFileProviderItemCommand, NSString, _SFPBSubscribeForUpdatesCommand, _SFPBCopyCommand, _SFPBPerformContactQueryCommand, _SFPBManageReservationCommand, _SFPBViewEmailCommand, _SFPBShowWrapperResponseViewCommand, _SFPBExpandInlineCommand, _SFPBShowSFCardCommand, _SFPBPlayVideoCommand, _SFPBCreateCalendarEventCommand, _SFPBOpenAppClipCommand, _SFPBOpenCoreSpotlightItemCommand, _SFPBRequestAppClipInstallCommand, _SFPBPlayMediaCommand;

@interface _SFPBCommand : PBCodable <_SFPBCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBShowContactCardCommand *showContactCardCommand;
@property (retain, nonatomic) _SFPBShowSFCardCommand *showSFCardCommand;
@property (retain, nonatomic) _SFPBShowAppStoreSheetCommand *showAppStoreSheetCommand;
@property (retain, nonatomic) _SFPBOpenPunchoutCommand *openPunchoutCommand;
@property (retain, nonatomic) _SFPBOpenFileProviderItemCommand *openFileProviderItemCommand;
@property (retain, nonatomic) _SFPBOpenAppClipCommand *openAppClipCommand;
@property (retain, nonatomic) _SFPBOpenWebClipCommand *openWebClipCommand;
@property (retain, nonatomic) _SFPBRequestAppClipInstallCommand *requestAppClipInstallCommand;
@property (retain, nonatomic) _SFPBRequestUserReportCommand *requestUserReportCommand;
@property (retain, nonatomic) _SFPBLaunchAppCommand *launchAppCommand;
@property (retain, nonatomic) _SFPBRunVoiceShortcutCommand *runVoiceShortcutCommand;
@property (retain, nonatomic) _SFPBIndexedUserActivityCommand *indexedUserActivityCommand;
@property (retain, nonatomic) _SFPBOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand;
@property (retain, nonatomic) _SFPBPerformIntentCommand *performIntentCommand;
@property (retain, nonatomic) _SFPBSearchInAppCommand *searchInAppCommand;
@property (retain, nonatomic) _SFPBUpdateSearchQueryCommand *updateSearchQueryCommand;
@property (retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand;
@property (retain, nonatomic) _SFPBInvokeSiriCommand *invokeSiriCommand;
@property (retain, nonatomic) _SFPBPerformContactQueryCommand *performContactQueryCommand;
@property (retain, nonatomic) _SFPBOpenCalculationCommand *openCalculationCommand;
@property (retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand;
@property (retain, nonatomic) _SFPBCallCommand *callCommand;
@property (retain, nonatomic) _SFPBEmailCommand *emailCommand;
@property (retain, nonatomic) _SFPBBeginMapsRoutingCommand *beginMapsRoutingCommand;
@property (retain, nonatomic) _SFPBToggleAudioCommand *toggleAudioCommand;
@property (retain, nonatomic) _SFPBPerformPersonEntityQueryCommand *performPersonEntityQueryCommand;
@property (retain, nonatomic) _SFPBShowPurchaseRequestSheetCommand *showPurchaseRequestSheetCommand;
@property (retain, nonatomic) _SFPBShowScreenTimeRequestSheetCommand *showScreenTimeRequestSheetCommand;
@property (retain, nonatomic) _SFPBPerformEntityQueryCommand *performEntityQueryCommand;
@property (retain, nonatomic) _SFPBShareCommand *shareCommand;
@property (retain, nonatomic) _SFPBCopyCommand *copyCommand;
@property (retain, nonatomic) _SFPBToggleWatchListStatusCommand *toggleWatchListStatusCommand;
@property (retain, nonatomic) _SFPBShowPhotosOneUpViewCommand *showPhotosOneUpViewCommand;
@property (retain, nonatomic) _SFPBPlayMediaCommand *playMediaCommand;
@property (retain, nonatomic) _SFPBOpenMediaCommand *openMediaCommand;
@property (retain, nonatomic) _SFPBAddToPhotosLibraryCommand *addToPhotosLibraryCommand;
@property (retain, nonatomic) _SFPBPerformContactActionCommand *performContactActionCommand;
@property (retain, nonatomic) _SFPBExpandInlineCommand *expandInlineCommand;
@property (retain, nonatomic) _SFPBSubscribeForUpdatesCommand *subscribeForUpdatesCommand;
@property (retain, nonatomic) _SFPBViewEmailCommand *viewEmailCommand;
@property (retain, nonatomic) _SFPBRejectPeopleInPhotoCommand *rejectPeopleInPhotoCommand;
@property (retain, nonatomic) _SFPBShowWrapperResponseViewCommand *showWrapperResponseViewCommand;
@property (retain, nonatomic) _SFPBClearProactiveCategoryCommand *clearProactiveCategoryCommand;
@property (retain, nonatomic) _SFPBCreateContactCommand *createContactCommand;
@property (retain, nonatomic) _SFPBCreateCalendarEventCommand *createCalendarEventCommand;
@property (retain, nonatomic) _SFPBCreateReminderCommand *createReminderCommand;
@property (retain, nonatomic) _SFPBManageReservationCommand *manageReservationCommand;
@property (retain, nonatomic) _SFPBUpdateSportsFollowingStatusCommand *updateSportsFollowingStatusCommand;
@property (retain, nonatomic) _SFPBRequestProductPageCommand *requestProductPageCommand;
@property (retain, nonatomic) _SFPBFlightCheckinCommand *flightCheckinCommand;
@property (retain, nonatomic) _SFPBExecuteToolCommand *executeToolCommand;
@property (retain, nonatomic) _SFPBExecuteMenuItemCommand *executeMenuItemCommand;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) _SFPBTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) _SFPBCommandReference *commandReference;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
