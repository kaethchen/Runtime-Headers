@class NSString;

@interface BSServiceFeatureFlag : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *featureName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)initWithDomain:(id)a0 featureName:(id)a1;

@end
