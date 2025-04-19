@interface PNPersonSuggester : NSObject

+ (id)_logger;
+ (BOOL)_isMePersonWithLocalIdentifier:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
+ (void)_logIntelligencePlatformUserFeedback:(long long)a0 forSuggestion:(id)a1;
+ (id)_meContactIdentifierWithError:(id *)a0;
+ (id)fetchAutonamingSuggestionForPerson:(id)a0 checkIsMe:(BOOL)a1 withError:(id *)a2;
+ (void)logUserFeedback:(long long)a0 forSuggestion:(id)a1;

@end
