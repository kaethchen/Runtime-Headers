@class EWSItemType;

@interface EWSSetItemFieldType : EWSItemChangeDescriptionType

@property (retain, nonatomic) EWSItemType *Item;

+ (id)definition;

- (void).cxx_destruct;

@end
