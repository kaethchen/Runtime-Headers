@class NSString;

@interface EWSDistributionListType : EWSItemType

@property (copy, nonatomic) NSString *FileAs;
@property (copy, nonatomic) NSString *DisplayName;
@property (nonatomic) long long ContactSource;

+ (id)definition;

- (void).cxx_destruct;

@end
