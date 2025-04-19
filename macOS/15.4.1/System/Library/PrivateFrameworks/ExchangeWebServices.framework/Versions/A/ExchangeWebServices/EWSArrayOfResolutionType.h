@class NSArray, NSString;

@interface EWSArrayOfResolutionType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *Resolution;
@property (nonatomic) long long IndexedPagingOffset;
@property (nonatomic) long long NumeratorOffset;
@property (nonatomic) long long AbsoluteDenominator;
@property (nonatomic) long long IncludesLastItemInRange;
@property (nonatomic) long long TotalItemsInView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
