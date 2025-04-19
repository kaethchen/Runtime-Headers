@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *bookmarks;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_appendDescriptionOfBookmark:(id)a0 toString:(id)a1 level:(unsigned long long)a2;
- (id)initWithBookmarks:(id)a0;

@end
