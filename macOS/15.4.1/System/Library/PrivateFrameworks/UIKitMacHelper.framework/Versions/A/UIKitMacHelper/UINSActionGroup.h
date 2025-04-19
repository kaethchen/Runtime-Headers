@class NSArray, BSProcessHandle;

@interface UINSActionGroup : NSObject

@property (copy) NSArray *actions;
@property (retain) BSProcessHandle *sourceApplication;

+ (id)groupWithActions:(id)a0 sourceApplication:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
