@interface CallHistoryDataSourcePredicate : NSObject

+ (id)predicateForCallsWithServiceProvider:(id)a0;
+ (id)predicateForCallsWithNoDuration;
+ (id)predicateFilteringOutCallTypes:(unsigned long long)a0;
+ (id)predicateForAudioCalls;
+ (id)predicateForCallToCallBackWithAnyOfTheseRemoteParticipantHandles:(id)a0 isoCountryCodes:(id)a1;
+ (id)predicateForCallsAfterDate:(id)a0 beforeDate:(id)a1;
+ (id)predicateForCallsThatAreRead:(BOOL)a0;
+ (id)predicateForCallsThatWereAnswered:(BOOL)a0;
+ (id)predicateForCallsThatWereOriginated:(BOOL)a0;
+ (id)predicateForCallsWithAnyOfTheseRemoteParticipantHandles:(id)a0 isoCountryCodes:(id)a1;
+ (id)predicateForCallsWithCallCategory:(unsigned int)a0;
+ (id)predicateForCallsWithDurationGreaterThan:(double)a0;
+ (id)predicateForCallsWithDurationLongerThanImmediateHangUp;
+ (id)predicateForCallsWithNumberOfRemoteParticipants:(long long)a0;
+ (id)predicateForFaceTimeCalls;
+ (id)predicateForMissedCallsSinceDate:(id)a0;
+ (id)predicateForRemoteParticipantsWithNormalizedValues:(id)a0;
+ (id)predicateForRemoteParticipantsWithValues:(id)a0;
+ (id)predicateForRemoteParticipantsWithValues:(id)a0 caseInsensitiveValues:(id)a1 normalizedValues:(id)a2;
+ (id)predicateForRemoteParticipantsWithValuesCaseInsensitive:(id)a0;
+ (id)predicateForTelephonyCalls;
+ (id)predicateForTelephonyOrFaceTimeCalls;
+ (id)predicateForVideoCalls;

@end
