@class NSArray, CNUIUserActionItem;

@interface CNUIUserActionListModel : NSObject

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *directoryServiceActions;
@property (copy, nonatomic) NSArray *foundOnDeviceActions;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL hasDefaultApp;

+ (id)emptyModel;

- (id)description;
- (void).cxx_destruct;
- (id)allActions;
- (id)initWithDefaultAction:(id)a0 actions:(id)a1 directoryServiceActions:(id)a2 foundOnDeviceActions:(id)a3 hasDefaultApp:(BOOL)a4;
- (id)initWithModel:(id)a0 actions:(id)a1;

@end
