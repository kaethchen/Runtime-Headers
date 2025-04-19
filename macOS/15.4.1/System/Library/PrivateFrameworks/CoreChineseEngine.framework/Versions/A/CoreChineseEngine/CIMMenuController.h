@class NSMenu;
@protocol CIMMenuControllerDataSource;

@interface CIMMenuController : NSObject

@property (retain, nonatomic) NSMenu *originalMenu;
@property (retain, nonatomic) NSMenu *menu;
@property (weak, nonatomic) id<CIMMenuControllerDataSource> dataSource;

+ (id)sharedMenuControllerWithDataSource:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
