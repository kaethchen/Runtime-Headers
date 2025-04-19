@class GEOAddressObject, NSString, NSDictionary, GEOMapItemClientAttributes, NSDate, GEOPlace;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    struct { double latitude; double longitude; } _coordinate;
    GEOAddressObject *_addressObject;
}

- (id)description;
- (id)name;
- (BOOL)isValid;
- (void).cxx_destruct;
- (struct { double x0; double x1; })coordinate;
- (id)eventName;
- (id)addressDictionary;
- (id)geoAddress;
- (id)_clientAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (id)_place;
- (BOOL)_responseStatusIsIncomplete;
- (id)addressObject;
- (id)eventDate;
- (BOOL)isEventAllDay;
- (id)weatherDisplayName;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;

@end
