@class NSUUID, NSMutableArray, NSMutableDictionary;

@interface AppExtensionContextMenu : NSObject {
    NSMutableDictionary *_userInfo;
}

@property (retain, nonatomic) NSUUID *extensionUUID;
@property (readonly, nonatomic) NSMutableArray *contextMenuItems;

- (void).cxx_destruct;
- (void)addContextMenuItem:(id)a0;
- (void)invalidateContextMenuUserInfoForPageUUID:(id)a0;
- (void)setUserInfo:(id)a0 forPageUUID:(id)a1;
- (id)userInfoForPageUUID:(id)a0;

@end
