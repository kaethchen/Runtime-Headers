@class NSString, AppExtensionContextMenu;

@interface AppExtensionContextMenuItem : NSObject

@property (readonly, weak, nonatomic) AppExtensionContextMenu *contextMenu;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *command;

- (void).cxx_destruct;
- (id)initWithAppExtensionContextMenu:(id)a0 text:(id)a1 command:(id)a2;
- (id)userInfoForPageUUID:(id)a0;

@end
