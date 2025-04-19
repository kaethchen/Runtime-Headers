@class NSMutableArray;

@interface VMUScanOverlay : NSObject

@property (readonly, nonatomic) NSMutableArray *refinementRules;

+ (id)defaultOverlay;
+ (id)defaultOverlayWithScanner:(id)a0;

- (void).cxx_destruct;
- (void)addMetadataRefinementRule:(id /* block */)a0;
- (id)initWithScanner:(id)a0;

@end
