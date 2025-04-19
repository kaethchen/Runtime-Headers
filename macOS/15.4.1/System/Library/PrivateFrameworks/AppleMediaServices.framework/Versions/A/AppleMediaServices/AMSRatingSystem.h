@class NSString, NSArray;

@interface AMSRatingSystem : NSObject

@property (readonly) NSString *kind;
@property (readonly) NSString *label;
@property (readonly) NSArray *contentRatings;
@property (readonly) NSString *ratingSystemID;
@property (readonly) NSArray *types;

+ (id)ratingSystemWithDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
