@class NSString;

@interface EWSContactsViewType : EWSBasePagingType

@property (copy, nonatomic) NSString *InitialName;
@property (copy, nonatomic) NSString *FinalName;

+ (id)definition;

- (void).cxx_destruct;

@end
