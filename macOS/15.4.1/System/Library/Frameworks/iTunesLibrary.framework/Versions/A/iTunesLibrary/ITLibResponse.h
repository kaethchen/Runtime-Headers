@class NSArray;

@interface ITLibResponse : NSObject

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 sections:(id)a1;

@end
