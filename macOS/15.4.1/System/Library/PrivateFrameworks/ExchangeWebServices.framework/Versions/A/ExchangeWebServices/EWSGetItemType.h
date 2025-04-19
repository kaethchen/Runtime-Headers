@class NSArray, EWSItemResponseShapeType;

@interface EWSGetItemType : EWSBaseRequestType

@property (retain, nonatomic) EWSItemResponseShapeType *ItemShape;
@property (copy, nonatomic) NSArray *ItemIds;

+ (id)definition;

- (void).cxx_destruct;

@end
