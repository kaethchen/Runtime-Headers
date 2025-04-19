@interface WBSPageTestEvaluator : NSObject

@property (readonly, nonatomic) BOOL macOS;
@property (readonly, nonatomic) BOOL iOS;
@property (readonly, nonatomic) BOOL iPhone;
@property (readonly, nonatomic) BOOL iPad;

- (BOOL)vision;
- (BOOL)macCatalyst;

@end
