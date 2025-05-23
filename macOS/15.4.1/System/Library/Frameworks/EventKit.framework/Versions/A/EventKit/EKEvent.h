@class NSURL, EKImage, NSDate, EKEventStore, EKSuggestedEventInfo, EKVirtualConference, EKCalendarDate, EKParticipant, NSMutableArray, NSString, NSSet, EKColor, EKRecurrenceIdentifier, NSArray, NSNumber, EKStructuredLocation, NSDateComponents;

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private, CalDateRangeProtocol> {
    EKStructuredLocation *_cachedLocationPrediction;
    NSDate *_cachedLocationPredictionExpirationDate;
    BOOL _locationPredictionFrozen;
    BOOL _locationPredictionAllowed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locationPredictionLock;
    NSMutableArray *_virtualConferenceURLsToInvalidateOnCommit;
}

@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *locationsWithoutPrediction;
@property (copy, nonatomic) EKCalendarDate *occurrenceStartDate;
@property (copy, nonatomic) EKCalendarDate *occurrenceEndDate;
@property (nonatomic) BOOL occurrenceIsAllDay;
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;
@property (copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;
@property (copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;
@property (nonatomic) BOOL requiresDetachDueToSnoozedAlarm;
@property (nonatomic) int clearModifiedFlags;
@property (retain, nonatomic) NSString *appEntityIdentifierOverride;
@property (retain, nonatomic) NSDate *endDateUnadjustedForLegacyClients;
@property (readonly, nonatomic) EKRecurrenceIdentifier *recurrenceIdentifier;
@property (readonly, nonatomic) NSString *appEntityIdentifier;
@property (readonly, nonatomic) NSDate *recurrenceDate;
@property (readonly, nonatomic) NSString *eventOccurrenceID;
@property (nonatomic) long long privacyLevel;
@property (readonly, nonatomic) BOOL locationIsAConferenceRoom;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double travelTime;
@property (readonly, nonatomic) NSDate *startDateIncludingTravel;
@property (readonly, nonatomic) BOOL isStartDateDirty;
@property (readonly, nonatomic) BOOL isEndDateDirty;
@property (readonly, nonatomic) BOOL allowsTravelTimeModifications;
@property (readonly, nonatomic) BOOL allowsAllDayModifications;
@property (retain, nonatomic) EKStructuredLocation *travelStartLocation;
@property (retain, nonatomic) EKStructuredLocation *endLocation;
@property (readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) BOOL needsGeocoding;
@property (nonatomic) long long travelAdvisoryBehavior;
@property (readonly, nonatomic) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled;
@property (readonly, nonatomic) BOOL eligibleForTravelAdvisories;
@property (readonly, nonatomic) BOOL potentiallyEligibleForTravelAdvisories;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (readonly, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocationWithoutPrediction;
@property (retain, nonatomic) NSDate *proposedStartDate;
@property (readonly, nonatomic) NSDate *proposedEndDate;
@property (readonly, nonatomic) BOOL allowsProposedTimeModifications;
@property (readonly, nonatomic) BOOL allowsResponseCommentModifications;
@property (readonly, nonatomic) BOOL allowsClearingCommentsAsOrganizer;
@property (nonatomic) BOOL isPhantom;
@property (nonatomic) BOOL isOriginalItemPhantom;
@property (nonatomic) unsigned long long cachedJunkStatus;
@property (readonly, nonatomic) BOOL isSignificantlyDetached;
@property (readonly, nonatomic) BOOL isSignificantlyDetachedIgnoringParticipation;
@property (retain, nonatomic) EKImage *image;
@property (retain, nonatomic) EKColor *color;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) NSString *birthdayContactName;
@property (readonly, nonatomic) BOOL hasCustomRecurrence;
@property (readonly, nonatomic) NSDate *originalStartDate;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSURL *conferenceURL;
@property (nonatomic) BOOL preventConferenceURLDetection;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) NSString *showEventURLString;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isPrivateEventSharedToMe;
@property (readonly, nonatomic) NSURL *launchURL;
@property (nonatomic) long long participationStatus;
@property (readonly, nonatomic) long long pendingParticipationStatus;
@property (readonly, nonatomic) BOOL allowsParticipationStatusModifications;
@property (readonly, nonatomic) BOOL currentUserMayActAsOrganizer;
@property (readonly, nonatomic) long long currentUserGeneralizedParticipantRole;
@property (readonly, nonatomic, getter=isCurrentUserInvitedAttendee) BOOL currentUserInvitedAttendee;
@property (readonly, nonatomic) BOOL allowsAvailabilityModifications;
@property (readonly, nonatomic) BOOL allowsPrivacyLevelModifications;
@property (retain, nonatomic) NSDate *participationStatusModifiedDate;
@property (readonly, nonatomic) BOOL supportsParticipationStatusModificationsWithoutNotification;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long invitationStatus;
@property (nonatomic) BOOL isAlerted;
@property (nonatomic) BOOL dateChanged;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic) BOOL titleChanged;
@property (nonatomic) BOOL locationChanged;
@property (nonatomic) BOOL videoConferenceChanged;
@property (nonatomic) BOOL recurrenceChanged;
@property (nonatomic) BOOL attendeeComment;
@property (nonatomic) BOOL attendeeStatus;
@property (nonatomic) BOOL attendeeProposedStartDate;
@property (nonatomic) BOOL attendeeDeclinedStartDate;
@property (nonatomic) BOOL attendeeReplyChanged;
@property (nonatomic) int externalTrackingStatus;
@property (readonly, copy, nonatomic) NSDate *initialStartDate;
@property (readonly, copy, nonatomic) NSDate *initialEndDate;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isMasterOrDetachedOccurrence;
@property (readonly, nonatomic) BOOL isStatusDirty;
@property (readonly, nonatomic) BOOL isAllDayDirty;
@property (readonly, nonatomic) EKCalendarDate *startCalendarDateIncludingTravelTime;
@property (readonly, nonatomic) double durationIncludingTravel;
@property (readonly, nonatomic) long long travelRoutingMode;
@property (readonly, nonatomic) BOOL canBeRespondedTo;
@property (readonly, nonatomic) BOOL canDetachSingleOccurrence;
@property (readonly, nonatomic) BOOL hasAttachmentChanges;
@property (readonly, nonatomic) EKCalendarDate *startCalendarDate;
@property (readonly, nonatomic) EKCalendarDate *endCalendarDate;
@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (nonatomic) long long locationPredictionState;
@property (readonly, nonatomic) BOOL hasPredictedLocation;
@property (nonatomic) BOOL firedTTL;
@property (readonly, nonatomic) BOOL responseMustApplyToAll;
@property (nonatomic) unsigned long long junkStatus;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic) BOOL isMainOccurrence;
@property (readonly, nonatomic, getter=isPrivacySet) BOOL privacySet;
@property (copy, nonatomic) NSString *recurrenceSet;
@property (retain, nonatomic) EKVirtualConference *virtualConference;
@property (retain, nonatomic) NSString *virtualConferenceTextRepresentation;
@property (nonatomic) long long specialDayType;
@property (readonly, nonatomic) BOOL isUndetached;
@property (readonly, nonatomic) BOOL isReminderIntegrationEvent;
@property (readonly, nonatomic) BOOL isIntegrationEvent;
@property (readonly, nonatomic) BOOL allowsNonzeroDuration;
@property (readonly, nonatomic) unsigned long long reminderOccurrenceType;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (readonly, nonatomic) EKParticipant *organizer;
@property (nonatomic) long long availability;
@property (readonly, nonatomic) BOOL isDetached;
@property (readonly, nonatomic) NSDate *occurrenceDate;
@property (readonly, nonatomic) NSString *birthdayContactIdentifier;
@property (readonly, nonatomic) long long birthdayPersonID;
@property (readonly, nonatomic) NSString *birthdayPersonUniqueID;
@property (readonly, nonatomic) NSString *sendersEmail;
@property (readonly, nonatomic) NSString *sendersPhoneNumber;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithEventStore:(id)a0;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)knownKeysToSkipForFutureChanges;
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (BOOL)_allowSlicingFromDetachedOccurrence;
+ (id)_basicChangesRequiringSpanAll;
+ (BOOL)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)a0;
+ (long long)_coercedEventAvailabilityForDesiredAvailability:(long long)a0 supportedAvailabilities:(unsigned long long)a1;
+ (void)_detachOrSliceEvent:(id)a0 withSpan:(long long)a1 savingEvent:(id)a2 withOriginalStartDate:(id)a3 newStartDate:(id)a4;
+ (long long)_eventAvailabilityForParticipantStatus:(long long)a0 supportedEventAvailabilities:(unsigned long long)a1 isAllDayEvent:(BOOL)a2;
+ (id)_locationStringForLocations:(id)a0;
+ (id)_modifiedNotificationUserInfoWithIdentifier:(id)a0 forRevert:(BOOL)a1;
+ (BOOL)_notDetachedOccurrenceOfEvent:(id)a0 existsInDateRangeWithStartDate:(id)a1 endDate:(id)a2 inTimeZone:(id)a3;
+ (id)_relatedCachedTimeKeys;
+ (BOOL)_validateSpanForRemove:(long long)a0 error:(id *)a1;
+ (long long)ekWeekDayFromVCSWeekDay:(unsigned long long)a0;
+ (id)eventFromICSEvent:(id)a0 inStore:(id)a1;
+ (id)externalUriScheme;
+ (Class)frozenClass;
+ (id)generateUniqueIDWithEvent:(id)a0 originalEvent:(id)a1 calendar:(id)a2;
+ (BOOL)isMultiDayTimedEventWithStartDate:(id)a0 endDate:(id)a1 allDay:(BOOL)a2 inCalendar:(id)a3;
+ (id)knownKeysToUseForFutureChanges;
+ (id)knownPerUserPropertyKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRequireRSVPKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)uniqueIDForDetachedOccurrenceOfEvent:(id)a0 withOriginalStartDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (void)setCalendar:(id)a0;
- (void)setTimeZone:(id)a0;
- (void)setURL:(id)a0;
- (void)setTitle:(id)a0;
- (void)reset;
- (BOOL)_reset;
- (id)title;
- (void)rollback;
- (id)constraints;
- (id)endLocation;
- (BOOL)isFloating;
- (long long)selfParticipantStatus;
- (id)uniqueId;
- (BOOL)validate:(id *)a0;
- (BOOL)refresh;
- (void)setNotes:(id)a0;
- (long long)compareStartDateWithEvent:(id)a0;
- (id)initWithEventStore:(id)a0;
- (id)structuredLocation;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)a0;
- (void)setRecurrenceRules:(id)a0;
- (BOOL)shouldHaveDefaultAlarms;
- (id)externalURI;
- (BOOL)isBirthday;
- (void)setOriginalStartDate:(id)a0;
- (unsigned long long)entityType;
- (void)setEndLocation:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (void)addEventAction:(id)a0;
- (BOOL)isMultiDayTimedEventInCalendar:(id)a0;
- (void)markAsCommitted;
- (id)responseComment;
- (id)startOfDayForEndDateInCalendar:(id)a0;
- (void)updateWithVCSEntity:(id)a0 inCalendar:(id)a1;
- (void)_adjustAvailabilityAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1;
- (void)_invalidateRecurrenceIdentifier;
- (BOOL)_multiValueRelatedObject:(id)a0 isAlsoASingleValueRelatedObjectForKey:(id)a1;
- (BOOL)changingAllDayPropertyIsAllowed;
- (void)markAsUndeleted;
- (void)setInvitationChangedProperties:(unsigned int)a0;
- (void)setNotesCommon:(id)a0;
- (void)setRecurrenceRuleFromICSString:(id)a0;
- (id)suggestedStartDateForCurrentRecurrenceRuleWithSimulatedNowDate:(id)a0;
- (void)_addNewAttendeesToRecentsIfNeeded;
- (void)_addOrganizerToRecentsIfNeeded;
- (void)_adjustAfterMovingOrCopyingFromOldCalendar:(id)a0 toNewCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2 savingItem:(id)a3;
- (void)_adjustAlarmsAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1;
- (void)_adjustAttachmentsAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2 savingItem:(id)a3;
- (void)_adjustAttendeesAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1;
- (id)_adjustDateIfFloatingForDate:(id)a0;
- (void)_adjustExternalFieldsAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2;
- (void)_adjustPrivacyAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2 savingItem:(id)a3;
- (void)_adjustRecurrenceRulesAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1 notes:(id)a2;
- (void)_adjustScheduleAgentAfterMovingOrCopyingFromCalendar:(id)a0 toCalendar:(id)a1 cachedConstraintsForOldCalendar:(id)a2;
- (void)_adjustTimeZoneAfterMovingOrCopyingToCalendar:(id)a0 notes:(id)a1;
- (void)_adjustURLAfterMovingOrCopyingToCalendar:(id)a0 notes:(id)a1;
- (void)_applyTimeChangesToMaster;
- (void)_assignAllAttachmentsNewIdentities;
- (BOOL)_attemptToUpdateComplexRecurrenceRule;
- (id)_buildConferenceStringFromNotesWithoutConference:(id)a0 serializedConference:(id)a1;
- (id)_calculateDurationWithStart:(id)a0 end:(id)a1 allDay:(BOOL)a2;
- (BOOL)_canMoveOrCopyFromCalendar:(id)a0 toCalendar:(id)a1 allowedRequirements:(long long)a2 error:(id *)a3;
- (void)_cancelDetachedEvents;
- (BOOL)_cancelWithSpan:(long long)a0 error:(id *)a1;
- (BOOL)_changesRequireDetachOrSlice;
- (BOOL)_checkStartDateConstraintAgainstDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(id)a1 error:(id *)a2;
- (void)_clearAttendeeChangedFlags;
- (void)_clearExceptionDatesAndUpdateDetachedOriginalDates:(id)a0;
- (void)_clearLocationPredictionCacheIfNotFrozen;
- (void)_clearOriginalDateFields;
- (id)_committedEndDate;
- (id)_committedStartDate;
- (id)_conferenceRoomDisplayStrings;
- (BOOL)_couldBeJunkCommon;
- (id)_defaultAlarmOffset;
- (void)_deleteErrorIfInvalid;
- (void)_deleteFromOccurrenceDateOnward:(id)a0 includeSlices:(BOOL)a1;
- (void)_deleteThisOccurrence;
- (void)_deleteWithSpan:(long long)a0;
- (void)_detachOrSliceWithSpan:(long long)a0 withOriginalStartDate:(id)a1 newStartDate:(id)a2;
- (id)_detectConferenceURL;
- (BOOL)_detectedConferenceURLOnBackingObjectMayBeInvalid;
- (BOOL)_diff:(id)a0 isDifferentFromCommittedEventHelperRequiresReschedule:(BOOL)a1;
- (void)_duplicateAddedAttachmentsToDetachedEvents:(id)a0;
- (id)_ekRecurrenceRuleFromICSRecurrenceRule:(id)a0;
- (id)_ekRecurrenceRuleFromVCSRecurrenceRule:(id)a0;
- (BOOL)_eligibleForTravelAdvisoriesIncludePotential:(BOOL)a0;
- (BOOL)_eventIsTheOnlyRemainingOccurrence;
- (id)_eventKitPropertyKeyForCalendarItemErrorPropertyKey:(id)a0;
- (void)_extendConferenceURLExpirationDateToDate:(id)a0;
- (BOOL)_fetchedEventIsConflict:(id)a0 forStartDate:(id)a1 endDate:(id)a2;
- (void)_filterExceptionDatesAndDetachments;
- (id)_generateNewUniqueID;
- (BOOL)_hasAbsoluteAlarms;
- (BOOL)_hasBasicChangesRequiringSpanAll;
- (BOOL)_hasExternalIDOrDeliverySource;
- (BOOL)_hasOrHadRecurrenceRule;
- (BOOL)_hasRecurrenceRuleChangeRequiringSpanAll;
- (unsigned long long)_integrationType;
- (BOOL)_invitationChangedPropertyForFlag:(unsigned int)a0;
- (BOOL)_isAllDay;
- (BOOL)_isOnlyChangeToAttendeesSelfAttendeeParticipationStatus;
- (BOOL)_isOriginalOccurrenceStartDateSameAsCommittedStartDate;
- (BOOL)_isParticipationStatusDirty;
- (BOOL)_isSignificantlyDetachedComparedToMaster:(id)a0 shouldIgnorePartStat:(BOOL)a1;
- (BOOL)_isSimpleRepeatingEvent;
- (BOOL)_isValidAttendee:(id)a0 forCalendar:(id)a1 selfAttendeeIsValid:(BOOL)a2;
- (id)_keysToChangeForDuplicateWithOptions:(long long)a0;
- (id)_lastRecurrenceDate;
- (id)_leftoversInDates:(id)a0 withGeneratedDates:(id)a1;
- (id)_legacyEventIdentifier;
- (BOOL)_needsAttendeePartStatReset;
- (id)_nextReminderOccurrenceDate;
- (BOOL)_noRemainingEarlierOccurrences;
- (id)_nsCalendar;
- (id)_occurrenceDatesForCount:(unsigned long long)a0;
- (BOOL)_occurrenceExistsOnDate:(id)a0 timeZone:(id)a1;
- (id)_originallyCommittedVirtualConference;
- (long long)_parentParticipationStatus;
- (id)_pinDate:(id)a0 withPinMode:(unsigned long long)a1;
- (id)_prioritizedConferencesSources;
- (void)_propagateChangesToDetachedEvents:(id)a0 originalItemBeforeSave:(id)a1 startDateOffset:(id)a2 duration:(id)a3 calendar:(id)a4;
- (void)_propagateChangesToSlice:(id)a0 originalItemBeforeSave:(id)a1 startDateOffset:(id)a2 duration:(id)a3 calendar:(id)a4 updateRecurrenceEnd:(BOOL)a5;
- (void)_recursivelyAssignAllAttachmentsNewIdentities;
- (void)_removeInvalidAlarmsDuringSave;
- (BOOL)_requirementsToMoveOrCopyToCalendarHelperAllowedToMoveOrCopyEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)_requirementsToMoveToCalendarHelperAlterationsRequiredToMoveEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)_requirementsToMoveToCalendarHelperDuplicationRequiredToMoveEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)_requirementsToMoveToCalendarHelperNeedToRemoveOriginalToMoveEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)_requirementsToMoveToCalendarHelperReinviteAttendeesRequiredToMoveEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)_requirementsToMoveToCalendarHelperRemoveAttendeesRequiredToMoveEventFromCalendar:(id)a0 toCalendar:(id)a1;
- (void)_resetInternalStateWithForce:(BOOL)a0;
- (void)_respondToProposedTimeFromAttendee:(id)a0 shouldAccept:(BOOL)a1;
- (BOOL)_revertIncludingCoCommits:(BOOL)a0;
- (void)_saveUndeletedDetachedOccurrence;
- (BOOL)_saveUndetachedOccurrenceWithError:(id *)a0;
- (void)_setEndDateUnadjustedForLegacyClients:(id)a0 allowSettingIfNotEditable:(BOOL)a1;
- (void)_setInvitationChangedProperty:(BOOL)a0 forFlag:(unsigned int)a1;
- (void)_setInvitationStatusAlertedIfNecessary;
- (void)_setInvitationStatusUnalertedIfNecessary;
- (void)_setNextCachedReminderOccurrenceDate:(id)a0;
- (void)_setStartDate:(id)a0 andClearProposedTimes:(BOOL)a1 allowSettingIfNotEditable:(BOOL)a2;
- (BOOL)_settingTimeZoneChangesStartEndDates;
- (BOOL)_shouldAlertInviteeDeclines;
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(long long)a0;
- (BOOL)_shouldDeclineInsteadOfDelete;
- (BOOL)_shouldPreserveFutureWhenSlicingWithStartDate:(id)a0 newStartDate:(id)a1;
- (void)_snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1 orTargetDate:(id)a2 pinsTriggerToStartDate:(BOOL)a3;
- (BOOL)_suggestedStartDateHelperRecurrenceRuleRequiresExpansion:(id)a0 forDate:(id)a1;
- (id)_travelTimeInternalDescription;
- (void)_updateEndDateForDate:(id)a0 withAdjustmentMode:(unsigned long long)a1;
- (void)_updateEndDateForDate:(id)a0 withAdjustmentMode:(unsigned long long)a1 adjustStartDate:(BOOL)a2;
- (id)_updateMasterDate:(id)a0 forChangeToOccurrenceDate:(id)a1 fromOriginalOccurrenceDate:(id)a2;
- (void)_updateModifiedProperties;
- (void)_updateModifiedPropertiesForThisEventAndAllDetachments;
- (id)_updatePredictedLocationCacheIfNeeded;
- (void)_updateRecurrenceEndDateForEvent:(id)a0 calendar:(id)a1 withOffset:(id)a2;
- (void)_updateRecurrenceEndDatesWithAdjustmentMode:(unsigned long long)a0;
- (void)_updateSelfAttendeeToMatchSelfAttendee:(id)a0;
- (void)_updateSelfFromDetachedEventIfNeededForDelete;
- (void)_updateStartDateForDate:(id)a0 withAdjustmentMode:(unsigned long long)a1;
- (void)_updateStartDateForDate:(id)a0 withAdjustmentMode:(unsigned long long)a1 adjustEndDate:(BOOL)a2;
- (void)_updateUUIDForNewParticipants;
- (void)_updateVideoConferenceOnlyModified;
- (BOOL)_userAddressesRepresentInvitedAttendee:(id)a0 checkEmailAddresses:(BOOL)a1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(long long)a0 error:(id *)a1;
- (void)_willSave;
- (void)acceptProposedTimeNotificationFromAttendee:(id)a0;
- (void)addConferenceRooms:(id)a0;
- (void)adjustedDatesForDate:(id)a0 persistedDateIsInUTC:(BOOL)a1 withAdjustmentMode:(unsigned long long)a2 pinMode:(unsigned long long)a3 outClientCalendarDate:(id *)a4 outPersistedDate:(id *)a5;
- (id)adjustedPersistedDateForDate:(id)a0 withAdjustmentMode:(unsigned long long)a1 pinMode:(unsigned long long)a2 clientCalendarDate:(id *)a3;
- (BOOL)allowsAttendeesModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)allowsRecurrenceModificationsForSpan:(long long)a0;
- (BOOL)allowsSpansOtherThanThisEvent;
- (void)applyChangesFromEvent:(id)a0 toEvent:(id)a1 ignoringDifferencesFrom:(id)a2;
- (BOOL)attendeeReplyChanged;
- (id)attendeesNotIncludingOrganizer;
- (id)attendeesNotIncludingOrganizerOrLocationsOrResources;
- (id)birthdayID;
- (unsigned long long)cachedJunkStatus;
- (BOOL)canForward;
- (BOOL)canMoveOrCopyToCalendar:(id)a0 fromCalendar:(id)a1 error:(id *)a2;
- (BOOL)canMoveToCalendar:(id)a0 fromCalendar:(id)a1 allowedRequirements:(long long)a2 error:(id *)a3;
- (BOOL)canMoveToCalendar:(id)a0 fromCalendar:(id)a1 error:(id *)a2;
- (BOOL)canWeInferUpdateToComplexRecurrenceRule;
- (void)clearCachedTimeValues;
- (void)clearDetectedConferenceURL;
- (void)clearIntegrationType;
- (void)clearInvitationStatus;
- (void)clearNextCachedReminderOccurrenceDate;
- (void)clearParsedConference;
- (void)clearVirtualConferenceURLsQueuedForInvalidation;
- (id)coCommitEvents;
- (id)committedConstraints;
- (id)committedCopy;
- (id)committedValueForKey:(id)a0;
- (long long)compareOriginalStartDateWithEvent:(id)a0;
- (long long)compareStartDateIncludingTravelWithEvent:(id)a0;
- (id)conferenceURLDetected;
- (id)conferenceURLDetectedString;
- (id)conferenceURLForDisplay;
- (BOOL)conferenceURLForDisplayCached;
- (id)conferenceURLString;
- (void)confirmPredictedLocation:(id)a0;
- (BOOL)conformsToRecurrenceRules:(id)a0;
- (id)copyToCalendar:(id)a0 withOptions:(long long)a1;
- (BOOL)couldBeJunk;
- (unsigned long long)countOfAttendeeProposedTimes;
- (long long)daysSpannedInCalendar:(id)a0;
- (void)declineProposedTimeNotificationFromAttendee:(id)a0;
- (id)defaultAlarm;
- (id)defaultAlarms;
- (id)diffFromCommitted;
- (BOOL)disallowProposeNewTime;
- (void)dismissAcceptedProposeNewTimeNotification;
- (void)dismissAttendeeRepliedNotification;
- (id)displayNotes;
- (id)duplicateWithOptions:(long long)a0;
- (BOOL)durationOverlapsRecurrenceInterval;
- (id)earliestOccurrenceEndingAfter:(id)a0;
- (id)earliestOccurrenceEndingAfter:(id)a0 excludeSignificantDetachments:(BOOL)a1 excludeCanceledDetachments:(BOOL)a2 excludeDeclinedDetachments:(BOOL)a3;
- (id)effectiveTimeZone;
- (id)endDateRaw;
- (BOOL)flag:(unsigned long long)a0;
- (void)forceLocationPredictionUpdate;
- (void)forceSetTimeZone:(id)a0;
- (BOOL)futureOccurrencesCannotBeAffectedByChangingStartDateToDate:(id)a0;
- (BOOL)hasADateChangeAndComplexRecurrenceWeDontKnowHowToUpdate;
- (BOOL)hasAttendeeProposedTimes;
- (BOOL)hasChangesRequiringSpanAll;
- (BOOL)hasValidEventAction;
- (id)initWithPersistentObject:(id)a0;
- (id)initWithPersistentObject:(id)a0 objectForCopy:(id)a1;
- (id)initWithPersistentObject:(id)a0 occurrenceDate:(id)a1;
- (void)invalidateRemovedVirtualConferences;
- (void)invalidateVirtualConferenceURLIfNeededOnCommit:(id)a0;
- (unsigned int)invitationChangedProperties;
- (BOOL)isAttendeeSameAsOrganizer:(id)a0;
- (BOOL)isDifferentAndHasForwardedAttendeesWithDiff:(id)a0;
- (BOOL)isDifferentAndHasNewProposedTimeWithDiff:(id)a0;
- (BOOL)isDifferentAndHasUnscheduledAttendeesWithDiff:(id)a0;
- (BOOL)isDifferentAndModifiedAttendeesWithDiff:(id)a0;
- (BOOL)isDifferentAndRequiresRSVPWithDiff:(id)a0;
- (BOOL)isDifferentAndRequiresRescheduleWithDiff:(id)a0;
- (BOOL)isDifferentExceptingPerUserPropertiesWithDiff:(id)a0;
- (BOOL)isDifferentFromCommittedEventAndHasUnscheduledAttendees;
- (BOOL)isDifferentFromCommittedEventAndRequiresRSVP;
- (BOOL)isDifferentFromCommittedEventAndRequiresReschedule;
- (BOOL)isDifferentWithDiff:(id)a0;
- (BOOL)isEqual:(id)a0 comparingKeys:(id)a1;
- (BOOL)isFirstOccurrence;
- (BOOL)isFirstOccurrenceIncludingSlices;
- (BOOL)isOnlyOccurrence;
- (BOOL)isOrWasIntegrationEvent;
- (BOOL)isOrWasPartOfRecurringSeries;
- (BOOL)isOutOfOrderWithEventInSeries;
- (BOOL)isProposedTimeEvent;
- (BOOL)isTentative;
- (BOOL)isValidAttendee:(id)a0 forCalendar:(id)a1;
- (id)lunarCalendarString;
- (void)makeRecurrenceEndCountBased;
- (void)makeRecurrenceEndDateBased;
- (void)markAsSaved;
- (void)markAsUndetachedWithStartDate:(id)a0 endDate:(id)a1;
- (void)markEventAsAttendeeForward;
- (id)masterEvent;
- (id)nextOccurrence;
- (id)nextOccurrenceOrDetachmentAfter:(id)a0;
- (BOOL)overlapsWithOrIsSameDayAsEventInSeries;
- (void)overrideEndDate:(id)a0;
- (void)overrideStartDate:(id)a0;
- (void)parsedConference:(id *)a0 andNotes:(id *)a1;
- (BOOL)phantomMaster;
- (void)postModifiedNotification;
- (void)postModifiedNotificationWithUserInfo:(id)a0;
- (id)potentialConflictOccurrenceDatesInTimePeriod:(double *)a0;
- (void)prefetchAttendeesWithAdditionalProperties:(id)a0;
- (id)previousOccurrence;
- (id)previousOccurrenceOrDetachmentBefore:(id)a0;
- (id)previouslySavedCopy;
- (id)privacyDescription;
- (id)privacyLevelString;
- (id)privacySafeIntegrationEventDescription;
- (id)propertiesThatCanBeModifiedOnReadOnlyCalendars;
- (void)rebaseSkippingRelationProperties:(id)a0;
- (void)rebaseSkippingRelationProperties:(id)a0 toEventStore:(id)a1;
- (void)rebaseToEventStore:(id)a0;
- (BOOL)refreshAndNotify:(BOOL)a0;
- (BOOL)refreshIfRefreshableAndNotify:(BOOL)a0;
- (void)rejectPredictedLocation;
- (void)removeConferenceRooms:(id)a0;
- (void)removeEventAction:(id)a0;
- (void)removeServerRefreshRelatedProperties;
- (BOOL)removeWithSpan:(long long)a0 error:(id *)a1;
- (long long)requirementsToMoveFromCalendar:(id)a0 toCalendar:(id)a1;
- (long long)requirementsToMoveToCalendar:(id)a0;
- (BOOL)requiresCopyToMoveFromCalendar:(id)a0 toCalendar:(id)a1;
- (BOOL)requiresDetach;
- (BOOL)revert;
- (id)roomAttendees;
- (BOOL)saveWithSpan:(long long)a0 error:(id *)a1;
- (id)scanForConflicts;
- (BOOL)seriesHasOutOfOrderEvents;
- (BOOL)seriesHasOverlappingOrOnSameDayOrOutOfOrderEvents;
- (BOOL)serverSupportedProposeNewTime;
- (void)setBirthdayContact:(id)a0;
- (void)setBirthdayContactIdentifier:(id)a0;
- (void)setCachedJunkStatus:(unsigned long long)a0;
- (void)setConferenceURLString:(id)a0;
- (void)setDisplayNotes:(id)a0;
- (void)setEndDateRaw:(id)a0;
- (void)setFlag:(unsigned long long)a0 value:(BOOL)a1;
- (void)setIsJunk:(BOOL)a0 shouldSave:(BOOL)a1;
- (void)setLocationPredictionAllowed:(BOOL)a0;
- (void)setLunarCalendarString:(id)a0;
- (void)setPhantomMaster:(BOOL)a0;
- (void)setPredictedLocationFrozen:(BOOL)a0;
- (void)setPrivacyLevelWithoutVerifyingPrivacyModificationsAllowed:(long long)a0;
- (void)setResponseComment:(id)a0;
- (void)setSpecialDayString:(id)a0;
- (void)setStartDateComponentsPreservingDuration:(id)a0;
- (void)setStartDateRaw:(id)a0;
- (void)setStructuredLocation:(id)a0 preserveConferenceRooms:(BOOL)a1;
- (void)setURLCommon:(id)a0;
- (id)singleRecurrenceRule;
- (id)snapshotCopyWithPropertyKeysToCopy:(id)a0 propertyKeysToSkip:(id)a1;
- (void)snoozeAlarm:(id)a0 untilTargetDate:(id)a1;
- (void)snoozeAlarm:(id)a0 untilTargetDate:(id)a1 pinsTriggerToStartDate:(BOOL)a2;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1 pinsTriggerToStartDate:(BOOL)a2;
- (id)specialDayString;
- (id)specificIdentifier;
- (id)startDateForRecurrence;
- (id)startDateRaw;
- (id)startOfDayForStartDateInCalendar:(id)a0;
- (id)suggestedStartDateForCurrentRecurrenceRule;
- (BOOL)supportsAddingAttachments;
- (void)updateDefaultAlarms;
- (BOOL)updateEventToEvent:(id)a0;
- (BOOL)updateEventToEvent:(id)a0 commit:(BOOL)a1;
- (BOOL)updateWithGeocodedMapItemAndSaveWithCommit:(id)a0 eventStore:(id)a1 error:(id *)a2;
- (BOOL)validateOccurrenceDateStillMatchesRecurrenceRules;
- (BOOL)validateRecurrenceRule:(id)a0 error:(id *)a1;
- (BOOL)validateWithSpan:(long long)a0 error:(id *)a1;

@end
