@interface PLSpotlightQueryUtilities : NSObject

+ (id)countAssetsQueryStringForLibraryIdentifier:(long long)a0;
+ (void)countForSearchQuery:(id)a0 timedDispatchGroup:(id)a1 completion:(id /* block */)a2;
+ (id)searchQueryForLibrary:(id)a0 queryString:(id)a1;
+ (id)searchQueryForLibraryIdentifier:(long long)a0 pathManager:(id)a1 queryString:(id)a2;

@end
