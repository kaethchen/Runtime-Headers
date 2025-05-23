@class NSString;

@interface FCIssueBookmark : NSObject <NSCopying>

@property (readonly, nonatomic) long long issueType;
@property (readonly, copy, nonatomic) NSString *pageID;
@property (readonly, copy, nonatomic) NSString *articleID;

+ (id)ANFBookmarkWithArticleID:(id)a0;
+ (id)PDFBookmarkWithPageID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIssueType:(long long)a0 articleID:(id)a1 pageID:(id)a2;

@end
