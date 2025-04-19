@class NSString, NSArray, NSDate, NSNumber;

@interface ITLibPodcastFeed : NSObject

@property (copy, nonatomic) NSNumber *persistentID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *sortTitle;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *description;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (copy, nonatomic) NSDate *addedDate;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (copy, nonatomic) NSArray *mediaItemPersistentIDs;
@property (nonatomic) unsigned long long playOrder;
@property (nonatomic) unsigned long long sortOrder;
@property (nonatomic) unsigned long long downloadAction;
@property (nonatomic) unsigned long long limitRule;
@property (nonatomic) unsigned long long removePlayedRule;

+ (id)podcastFeedWithDict:(id)a0;

- (void).cxx_destruct;

@end
