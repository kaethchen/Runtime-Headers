@class NSString, NSArray, AMFFeed, NSDate, AMFFeedContent, NSURL;

@interface AMFFeedEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AMFFeedContent *entryDescription;
@property (retain, nonatomic) AMFFeedContent *content;
@property (retain, nonatomic) NSDate *datePublished;
@property (retain, nonatomic) NSDate *dateUpdated;
@property (copy, nonatomic) NSString *_internalAuthorString;
@property (retain, nonatomic) NSArray *authors;
@property (retain, nonatomic) NSArray *contributors;
@property (retain, nonatomic) NSArray *enclosures;
@property (weak, nonatomic) AMFFeed *feed;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *authorsAndContributors;
@property (readonly, copy, nonatomic) NSString *authorString;

+ (id)dateFromAtomDateString:(id)a0;
+ (id)dateFromRSSDateString:(id)a0;
+ (id)feedEntryWithAtomFeedElement:(id)a0 baseURL:(id)a1;
+ (id)feedEntryWithRSSFeedElement:(id)a0 baseURL:(id)a1;
+ (id)feedPersonWithAtomPersonElement:(id)a0;
+ (id)peopleListWithAtomPeopleElements:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 urlString:(id)a1;

@end
