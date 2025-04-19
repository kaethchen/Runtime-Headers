@class NSString;

@interface EWSRulePredicateSizeRangeType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long MinimumSize;
@property (nonatomic) BOOL MinimumSizeSpecified;
@property (nonatomic) long long MaximumSize;
@property (nonatomic) BOOL MaximumSizeSpecified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
