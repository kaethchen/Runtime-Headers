@class NSString;

@interface FI_TSearchCriteriaTableViewItem : FI_TTableViewItem

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *localizedAttributeName;
@property (copy, nonatomic) NSString *localizedAttributeDescription;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) BOOL inMenu;

- (void).cxx_destruct;
- (id)initWithAttributeName:(const void *)a0;

@end
