@class EWSFindItemParentType;

@interface EWSFindItemResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSFindItemParentType *RootFolder;

+ (id)definition;

- (void).cxx_destruct;

@end
