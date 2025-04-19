@class NSString, RTContact;

@interface RTFavoritesEntry : NSObject

@property (readonly, nonatomic) RTContact *contact;
@property (readonly, nonatomic) NSString *value;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 value:(id)a1;

@end
