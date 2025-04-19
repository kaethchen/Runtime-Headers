@class EWSItemType;

@interface EWSAppendToItemFieldType : EWSItemChangeDescriptionType

@property (retain, nonatomic) EWSItemType *Item;

+ (id)definition;

- (void).cxx_destruct;

@end
