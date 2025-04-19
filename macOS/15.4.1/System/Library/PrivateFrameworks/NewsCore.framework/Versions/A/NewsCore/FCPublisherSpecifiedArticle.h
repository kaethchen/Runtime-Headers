@class NSString, NSURL, NSDate, FCHeadlineThumbnailMetadata;

@interface FCPublisherSpecifiedArticle : NSObject <FCHeadlineMetadata>

@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *displayDate;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (readonly, nonatomic) NSURL *routeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
