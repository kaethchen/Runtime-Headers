@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {
    NSDictionary *infoDictionary;
    GEOCity *_realCity;
}

+ (id)cityProxyWithDumpDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)name;
- (id)timeZone;
- (id)displayName;
- (id)country;
- (id)latitude;
- (id)longitude;
- (id)timeZoneName;
- (id)_objectFromInfoDictionaryWithKey:(id)a0;
- (id)displayNameAndCountry;
- (id)displayNameLanguage:(id *)a0;
- (id)displayShortTimeZoneString;
- (id)displayTimeZoneString;
- (id)geonameid;
- (id)initWithDumpDictionary:(id)a0;
- (id)population;
- (id)realCity;
- (id)regionalCode;

@end
