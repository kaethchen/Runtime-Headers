@class NSString, NSDictionary, NSArray, CLLocation, NSURL;
@protocol MTLDevice;

@interface VIQueryContext : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) BOOL includeLowConfidenceRegions;
@property (readonly, nonatomic) NSDictionary *customDetectorThreshold;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) double uiScale;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSArray *catalogIDs;
@property (readonly, nonatomic) double frameTimestamp;
@property (readonly, nonatomic) double lastSearchTimestamp;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *referralURL;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSString *engagementSuggestionType;
@property (readonly, nonatomic) id<MTLDevice> preferredMetalDevice;

+ (id)contextWithDictionary:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 applicationIdentifier:(id)a1 uiScale:(double)a2 teamID:(id)a3 catalogIDs:(id)a4 frameTimestamp:(double)a5 lastSearchTimestamp:(double)a6 location:(id)a7 imageURL:(id)a8 referralURL:(id)a9 imageType:(long long)a10 featureIdentifier:(id)a11 engagementSuggestionType:(id)a12 locale:(id)a13 countryCode:(id)a14 preferredMetalDevice:(id)a15 includeLowConfidenceRegions:(BOOL)a16 customDetectorThreshold:(id)a17;

@end
