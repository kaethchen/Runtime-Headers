@class _SFPBStructuredLocation, NSString, _SFPBTimeZone, _SFPBURL, NSData, _SFPBDate;

@interface _SFPBCalendarEvent : PBCodable <_SFPBCalendarEvent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBDate *startDate;
@property (retain, nonatomic) _SFPBDate *endDate;
@property (nonatomic) BOOL isAllDay;
@property (retain, nonatomic) _SFPBStructuredLocation *location;
@property (copy, nonatomic) NSString *notes;
@property (retain, nonatomic) _SFPBTimeZone *startTimeZone;
@property (retain, nonatomic) _SFPBTimeZone *endTimeZone;
@property (retain, nonatomic) _SFPBStructuredLocation *endLocation;
@property (retain, nonatomic) _SFPBURL *url;
@property (readonly, nonatomic) NSData *jsonData;
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
