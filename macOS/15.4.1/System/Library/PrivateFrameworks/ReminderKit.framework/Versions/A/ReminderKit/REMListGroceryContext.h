@class REMList, NSString;

@interface REMListGroceryContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) BOOL shouldCategorizeGroceryItems;
@property (readonly, nonatomic) BOOL shouldSuggestConversionToGroceryList;
@property (readonly, nonatomic) NSString *groceryLocaleID;

- (void).cxx_destruct;
- (id)initWithList:(id)a0;

@end
