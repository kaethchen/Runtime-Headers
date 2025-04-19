@interface PLInitialSuggestionsStorageManager : NSObject

+ (BOOL)_deleteInitialSuggestionsAtFilePath:(id)a0 error:(out id *)a1;
+ (id)_initialSuggestionsFilePathForPhotoLibrary:(id)a0;
+ (BOOL)deleteInitialSuggestionsForPathManager:(id)a0 error:(out id *)a1;
+ (BOOL)deleteInitialSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (id)initialSearchSuggestionsForPhotoLibrary:(id)a0 error:(out id *)a1;
+ (BOOL)saveInitialSuggestions:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;

@end
