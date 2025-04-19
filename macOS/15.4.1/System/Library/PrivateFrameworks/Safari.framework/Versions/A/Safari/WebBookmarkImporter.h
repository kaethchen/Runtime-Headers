@class SafariWebBookmarkList, NSError;

@interface WebBookmarkImporter : NSObject

@property (readonly, nonatomic) SafariWebBookmarkList *topBookmark;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)unescapeHTML:(id)a0;

@end
