@class NSUUID, NSString, NSURL, NSDate, NSSet, CNContact, NSImage, NSMutableSet, NSNumber;

@interface WBSForYouLinkRecommendation : NSObject {
    NSMutableSet *_originalQueries;
    NSImage *_appIcon;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footnote;
@property (readonly, copy, nonatomic) NSString *originalQueriesString;
@property (readonly, copy, nonatomic) NSSet *originalQueries;
@property (readonly, nonatomic) NSURL *pageURL;
@property (readonly, copy, nonatomic) NSString *simplifiedURLString;
@property (readonly, nonatomic) BOOL prefersLeadImage;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSImage *contactImage;
@property (readonly, nonatomic) NSImage *appIcon;
@property (readonly, nonatomic) NSImage *sourceIcon;
@property (readonly, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) id sourceID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *badgeBundleIdentifier;
@property (copy, nonatomic) NSString *secondarySourceIdentifier;
@property (readonly, nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long topicSource;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *cachedScore;

- (void).cxx_destruct;
- (void)addOriginalQueries:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 lastSeenDate:(id)a2 source:(unsigned long long)a3 topicSource:(unsigned long long)a4;

@end
