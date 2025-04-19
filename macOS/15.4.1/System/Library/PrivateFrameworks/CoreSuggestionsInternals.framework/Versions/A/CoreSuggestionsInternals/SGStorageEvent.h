@class NSData, NSString, SGRecordId, SGSimpleTimeRange, NSArray, NSSet, SGDuplicateKey;

@interface SGStorageEvent : NSObject <SGEventForGeocode>

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } creationTimestamp;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } lastModifiedTimestamp;
@property (readonly, nonatomic) SGSimpleTimeRange *when;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSSet *tags;
@property (readonly, nonatomic) NSData *structuredData;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) BOOL curated;
@property (readonly, nonatomic) NSString *opaqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateForUTCDate:(id)a0 withTimeZone:(id)a1;
+ (id)storageEventFromEntity:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (BOOL)isAllDay;
- (id)loggingIdentifier;
- (id)attributeSetForEvent;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (id)geocodedEventWithStartDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3 locations:(id)a4;
- (unsigned long long)geocodingMode;
- (id)poiFilters;
- (id)_dateWithoutTimezoneFromString:(id)a0;
- (id)convertToEvent:(id)a0;
- (id)_adjustLocalDateToUTC:(id)a0;
- (id)_appointmentEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_flightEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_hotelEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_partyEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_rentalCarEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_restaurantEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_ticketedShowEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)_ticketedTransportationEntityItemFromAttributeSet:(id)a0 error:(id *)a1;
- (id)cascadeEntityItemForEvent;
- (id)convertToEventWithOrigin:(id)a0;
- (id)extraKeyTag;
- (id)fieldsToSaveOnConfirmation;
- (BOOL)heuristicUpdatingEnabled;
- (id)initWithRecordId:(id)a0 duplicateKey:(id)a1 sourceKey:(id)a2 content:(id)a3 title:(id)a4 creationTimestamp:(struct SGUnixTimestamp_ { double x0; })a5 lastModifiedTimestamp:(struct SGUnixTimestamp_ { double x0; })a6 tags:(id)a7 when:(id)a8 locations:(id)a9 structuredData:(id)a10 state:(unsigned int)a11 curated:(BOOL)a12;
- (BOOL)isEqualToStorageEvent:(id)a0;
- (BOOL)isFromDataDetectors;
- (BOOL)isFromSuggestions;
- (id)urlFromTags;

@end
