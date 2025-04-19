@class NSArray;

@interface TPSRegionsValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetRegions;
@property (readonly, nonatomic) NSArray *excludeRegions;

- (id)initWithTargetRegions:(id)a0 excludeRegions:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
