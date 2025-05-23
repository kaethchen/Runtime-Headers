@class NSString, SISchemaVersion, SISchemaUUID, NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionCommonSignals : SISchemaInstrumentationMessage {
    struct { unsigned char choicesCount : 1; unsigned char timestampSec : 1; unsigned char rawLanguage : 1; unsigned char rawLocale : 1; unsigned char rawStateOrProvince : 1; unsigned char rawCountry : 1; unsigned char rawRequestDeviceCategory : 1; unsigned char calendarHourOfDay : 1; unsigned char calendarDayOfWeek : 1; unsigned char calendarWeekOfMonth : 1; unsigned char calendarMonthOfYear : 1; unsigned char isClientDaylight : 1; unsigned char isDeviceLockStatus : 1; unsigned char deviceMotionState : 1; unsigned char isClientNavigating : 1; unsigned char isCarPlay : 1; unsigned char historicalDataCount : 1; unsigned char disambiguationReason : 1; } _has;
}

@property (copy, nonatomic) NSString *usecase;
@property (nonatomic) BOOL hasUsecase;
@property (nonatomic) int choicesCount;
@property (nonatomic) BOOL hasChoicesCount;
@property (nonatomic) long long timestampSec;
@property (nonatomic) BOOL hasTimestampSec;
@property (nonatomic) int rawLanguage;
@property (nonatomic) BOOL hasRawLanguage;
@property (nonatomic) int rawLocale;
@property (nonatomic) BOOL hasRawLocale;
@property (nonatomic) int rawStateOrProvince;
@property (nonatomic) BOOL hasRawStateOrProvince;
@property (nonatomic) int rawCountry;
@property (nonatomic) BOOL hasRawCountry;
@property (nonatomic) int rawRequestDeviceCategory;
@property (nonatomic) BOOL hasRawRequestDeviceCategory;
@property (nonatomic) int calendarHourOfDay;
@property (nonatomic) BOOL hasCalendarHourOfDay;
@property (nonatomic) int calendarDayOfWeek;
@property (nonatomic) BOOL hasCalendarDayOfWeek;
@property (nonatomic) int calendarWeekOfMonth;
@property (nonatomic) BOOL hasCalendarWeekOfMonth;
@property (nonatomic) int calendarMonthOfYear;
@property (nonatomic) BOOL hasCalendarMonthOfYear;
@property (nonatomic) int isClientDaylight;
@property (nonatomic) BOOL hasIsClientDaylight;
@property (nonatomic) int isDeviceLockStatus;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) int isClientNavigating;
@property (nonatomic) BOOL hasIsClientNavigating;
@property (nonatomic) int isCarPlay;
@property (nonatomic) BOOL hasIsCarPlay;
@property (nonatomic) int historicalDataCount;
@property (nonatomic) BOOL hasHistoricalDataCount;
@property (nonatomic) int disambiguationReason;
@property (nonatomic) BOOL hasDisambiguationReason;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) BOOL hasTrialTreatmentId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCarPlay;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRawLocale;
- (void)deleteCalendarDayOfWeek;
- (void)deleteCalendarHourOfDay;
- (void)deleteCalendarMonthOfYear;
- (void)deleteCalendarWeekOfMonth;
- (void)deleteChoicesCount;
- (void)deleteDeviceMotionState;
- (void)deleteDisambiguationReason;
- (void)deleteHistoricalDataCount;
- (void)deleteIsClientDaylight;
- (void)deleteIsClientNavigating;
- (void)deleteIsDeviceLockStatus;
- (void)deleteModelVersion;
- (void)deleteRawCountry;
- (void)deleteRawLanguage;
- (void)deleteRawRequestDeviceCategory;
- (void)deleteRawStateOrProvince;
- (void)deleteTimestampSec;
- (void)deleteTrialTreatmentId;
- (void)deleteUsecase;
- (id)suppressMessageUnderConditions;

@end
