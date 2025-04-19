@class NSArray;

@interface SALanguageCookieHandler : NSObject

@property (retain) NSArray *guessedCountries;
@property BOOL usingVoiceOver;

- (void).cxx_destruct;
- (id)initReadingFile:(BOOL)a0;
- (void)readValuesFromCookieFile;
- (void)writeValuesToCookieFile;

@end
