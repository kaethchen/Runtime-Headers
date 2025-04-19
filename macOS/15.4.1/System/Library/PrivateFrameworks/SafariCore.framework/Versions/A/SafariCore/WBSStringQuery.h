@class NSString;

@interface WBSStringQuery : NSObject

@property (class, readonly, nonatomic) WBSStringQuery *queryThatMatchesEverything;

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) long long matchingType;
@property (readonly, copy, nonatomic) NSString *matchingTypeDescriptionString;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 matchingType:(long long)a1;

@end
