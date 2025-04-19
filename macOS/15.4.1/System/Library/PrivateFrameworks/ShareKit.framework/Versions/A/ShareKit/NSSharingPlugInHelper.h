@interface NSSharingPlugInHelper : NSObject

+ (id)imageNamed:(id)a0;
+ (id)userDefaults;
+ (id)computeAlternateImageFromImage:(id)a0;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(BOOL)a2 allowParticipantsToInvite:(BOOL)a3 toShare:(id)a4 inContainer:(id)a5 completionHandler:(id /* block */)a6;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(BOOL)a2 allowParticipantsToInvite:(BOOL)a3 toShare:(id)a4 inContainer:(id)a5 withURL:(id)a6 completionHandler:(id /* block */)a7;
+ (void)_addParticipantEmails:(id)a0 phoneNumbers:(id)a1 asReadWrite:(BOOL)a2 toShare:(id)a3 inContainer:(id)a4 completionHandler:(id /* block */)a5;
+ (void)_asyncExtractFromExtensionItem:(id)a0 wantsTextItems:(BOOL)a1 wantsFileURLItems:(BOOL)a2 wantsDistantURLs:(BOOL)a3 wantsImages:(BOOL)a4 wantsCKShareProviders:(BOOL)a5 treatImagesAsFileURLItems:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)_asyncParseExtensionItem:(id)a0 wantsBodyMessage:(BOOL)a1 wantsDistantURLs:(BOOL)a2 wantsImages:(BOOL)a3 includeURLsInBodyMessage:(BOOL)a4 writeImagesAsFileURLs:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)_asyncParseExtensionItem:(id)a0 wantsBodyMessage:(BOOL)a1 wantsFileURLs:(BOOL)a2 wantsDistantURLs:(BOOL)a3 wantsImages:(BOOL)a4 includeURLsInBodyMessage:(BOOL)a5 writeImagesAsFileURLs:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)_removeParticipants:(id)a0 fromShare:(id)a1 inContainer:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_serviceBundle;
+ (id)attributedStringByTrimmingCharactersInSet:(id)a0 inAttributedString:(id)a1;
+ (void)imageAndMoviesURLForItemProvider:(id)a0 writeIfNeeded:(BOOL)a1 allowMovies:(BOOL)a2 allowLivePhotos:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (void)imageAndMoviesURLForItemProvider:(id)a0 writeIfNeeded:(BOOL)a1 allowMovies:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (void)imageURLForItemProvider:(id)a0 writeIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)movieURLForShareProxyItem:(id)a0;
+ (void)parseExtensionItem:(id)a0 getBodyMessage:(id *)a1 includeURLsInBodyMessage:(BOOL)a2 getFileURLs:(id *)a3 getDistantURLs:(id *)a4 getImages:(id *)a5 getImageCount:(long long *)a6 writeImagesAsFileURLs:(BOOL)a7;
+ (id)plugInIdentifier;
+ (id)temporaryImageFileName;
+ (id)temporaryMovieFileName;
+ (id)writeImage:(id)a0;
+ (id)writeMovie:(id)a0;

@end
