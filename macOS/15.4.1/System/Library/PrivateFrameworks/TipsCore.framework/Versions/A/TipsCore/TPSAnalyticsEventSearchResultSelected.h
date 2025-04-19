@class NSString;

@interface TPSAnalyticsEventSearchResultSelected : TPSAnalyticsEvent

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *bookSlug;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithSearchID:(id)a0 searchTerm:(id)a1 tipID:(id)a2 collectionID:(id)a3 correlationID:(id)a4;
+ (id)eventWithSearchID:(id)a0 searchTerm:(id)a1 topicID:(id)a2 bookID:(id)a3 bookSlug:(id)a4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithSearchID:(id)a0 searchTerm:(id)a1 tipID:(id)a2 collectionID:(id)a3 correlationID:(id)a4;
- (id)_initWithSearchID:(id)a0 searchTerm:(id)a1 topic_id:(id)a2 book_id:(id)a3 book_slug:(id)a4;
- (id)mutableAnalyticsEventRepresentation;

@end
