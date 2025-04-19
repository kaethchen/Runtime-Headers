@protocol BookmarkItem;

@interface BookmarkTouchIconRequest : WBSTouchIconRequest

@property (readonly, nonatomic) id<BookmarkItem> bookmark;

+ (id)requestWithBookmark:(id)a0 minimumIconSize:(struct CGSize { double x0; double x1; })a1 maximumIconSize:(struct CGSize { double x0; double x1; })a2 useSiteNameInsteadOfTitle:(BOOL)a3;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithBookmark:(id)a0 minimumIconSize:(struct CGSize { double x0; double x1; })a1 maximumIconSize:(struct CGSize { double x0; double x1; })a2 useSiteNameInsteadOfTitle:(BOOL)a3;

@end
