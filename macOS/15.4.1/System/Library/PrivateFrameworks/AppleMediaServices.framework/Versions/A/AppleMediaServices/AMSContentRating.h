@class NSString, NSURL, NSNumber;

@interface AMSContentRating : NSObject

@property (readonly) NSString *contentRatingID;
@property (readonly) NSURL *imageURL;
@property (readonly) NSString *kind;
@property (readonly) NSString *label;
@property (readonly) NSString *name;
@property (readonly) NSString *ratingDescription;
@property (readonly) NSNumber *value;

+ (id)contentRatingWithDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
