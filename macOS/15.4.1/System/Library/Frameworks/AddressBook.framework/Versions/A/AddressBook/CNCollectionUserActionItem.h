@class NSString, CNUIUserActionItem;
@protocol CNUIUserActionContext;

@interface CNCollectionUserActionItem : NSObject <ABCollectionAction>

@property (readonly, nonatomic) CNUIUserActionItem *actionItem;
@property (readonly, nonatomic) id<CNUIUserActionContext> context;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionTypeForGlyphName:(id)a0;

@end
