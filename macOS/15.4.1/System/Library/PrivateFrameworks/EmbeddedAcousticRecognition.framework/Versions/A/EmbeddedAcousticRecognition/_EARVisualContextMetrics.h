@class NSString, NSArray;

@interface _EARVisualContextMetrics : NSObject

@property (readonly, nonatomic) NSString *entityTaggerCategory;
@property (readonly, nonatomic) NSArray *visualContextCategories;
@property (readonly, nonatomic) NSArray *speechProfileCategories;

- (void).cxx_destruct;
- (id)initWithEntityCategory:(id)a0 visualContextCategories:(id)a1 speechProfileCategories:(id)a2;

@end
