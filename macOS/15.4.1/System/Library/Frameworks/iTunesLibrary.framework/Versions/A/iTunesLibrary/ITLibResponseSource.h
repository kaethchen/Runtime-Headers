@class NSArray;

@interface ITLibResponseSource : NSObject

@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithSections:(id)a0 items:(id)a1;

@end
