@class NSString, NSArray;

@interface TVRCFilmographyCategory : NSObject {
    NSArray *_orderedItems;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *orderedItems;

+ (id)filmographyCategoryWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
