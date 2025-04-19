@class GEOAddressObject, NSString, NSDictionary, GEOLocation, NSURL, GEOPlace;

@interface GEOMapItemAssistant : GEOBaseMapItem {
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (id)description;
- (id)name;
- (BOOL)isValid;
- (void).cxx_destruct;
- (struct { double x0; double x1; })coordinate;
- (unsigned long long)_muid;
- (id)addressDictionary;
- (id)geoAddress;
- (id)_businessURL;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasUserRatingScore;
- (float)_normalizedUserRatingScore;
- (id)_place;
- (BOOL)_responseStatusIsIncomplete;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)addressObject;
- (id)weatherDisplayName;
- (id)initWithWithLocation:(id)a0 addressDictionary:(id)a1 name:(id)a2 businessURL:(id)a3 phoneNumber:(id)a4 sessionID:(id)a5 muid:(unsigned long long)a6 attributionID:(id)a7 sampleSizeForUserRatingScore:(unsigned int)a8 normalizedUserRatingScore:(float)a9;

@end
