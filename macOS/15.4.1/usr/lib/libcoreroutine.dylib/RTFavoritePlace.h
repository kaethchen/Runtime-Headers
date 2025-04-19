@class NSString, RTMapItem;

@interface RTFavoritePlace : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 mapItem:(id)a1;

@end
