@class _NSServiceEntry, NSArray, NSSet;

@interface _NSServiceFilter : NSObject {
    unsigned long long desiredFilterMask;
    unsigned int wordLimit;
    unsigned int characterLimit;
    _NSServiceEntry *entry;
    id bundleIdentifier;
    id textScript;
    id textLanguage;
    NSArray *linkSchemes;
    NSArray *nonstandardContentTypes;
    NSSet *menuLocations;
    struct { unsigned char contentTypeWebURL : 1; unsigned char contentTypeAnyURL : 1; unsigned char contentTypeDate : 1; unsigned char contentTypeAddress : 1; unsigned char contentTypeFilePath : 1; unsigned char contentTypeRadar : 1; unsigned char contentTypeEmail : 1; unsigned char contentTypePhoneNumber : 1; unsigned char contentTypeTransitInformation : 1; unsigned char requiresCJKInputSource : 1; unsigned char requiresAnyCharacterBeHalfWidth : 1; unsigned char requiresAnyCharacterBeFullWidth : 1; unsigned char requiresNonIdentityTraditionalToSimpleConversion : 1; unsigned char requiresNonIdentitySimpleToTraditionalConversion : 1; unsigned char disqualified : 1; unsigned char sense : 1; unsigned short reserved : 16; } flags;
}

+ (BOOL)isCJKInputSourceEnabled;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)serviceCategory;
- (id)_descriptionInnards;
- (void)_setMenuLocations:(id)a0;
- (id)dataDetectorTypes;
- (id)descriptionForTracking;
- (unsigned long long)desiredFilterMask;
- (BOOL)hasDataDetectorTypes;
- (BOOL)isRequiredContext;

@end
