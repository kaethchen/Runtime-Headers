@class NSArray, NSMapTable, KHLayout, NSMutableArray, KHProduct;

@interface KHProjectSubgroup : NSObject {
    NSMutableArray *_layouts;
}

@property (readonly, nonatomic) NSMutableArray *sortedProducts;
@property (readonly, nonatomic) NSMapTable *projectsByProducts;
@property (nonatomic) BOOL layoutsChanging;
@property (readonly, nonatomic) NSArray *projects;
@property (readonly, nonatomic) NSArray *layouts;
@property (readonly, nonatomic) KHLayout *posterLayout;
@property (readonly, nonatomic) KHProduct *posterProduct;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)sortedProjects:(id)a0;
- (void)addProject:(id)a0;
- (void)applyOrderQuantities:(id)a0;
- (void)didChangeLayouts;
- (id)framesWithContentIssueOfType:(unsigned long long)a0;
- (unsigned long long)layoutIndexOffsetForProject:(id)a0;
- (id)projectForProduct:(id)a0;
- (id)projectLayoutWithPhotoID:(id)a0;
- (void)removeProject:(id)a0;
- (void)resetLayouts;
- (void)resetProjects;
- (void)willChangeLayouts;

@end
