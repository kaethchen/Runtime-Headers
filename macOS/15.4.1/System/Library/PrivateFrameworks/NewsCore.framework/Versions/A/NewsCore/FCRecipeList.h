@class NSString, NTPBRecipeListRecord, NSArray, FCInterestToken, NSDate;

@interface FCRecipeList : NSObject

@property (readonly, nonatomic) NTPBRecipeListRecord *pbRecord;
@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSArray *recipeIDs;

- (void).cxx_destruct;
- (id)initWithRecipeIDs:(id)a0 identifier:(id)a1;
- (id)initWithRecipeListRecord:(id)a0 interestToken:(id)a1;

@end
