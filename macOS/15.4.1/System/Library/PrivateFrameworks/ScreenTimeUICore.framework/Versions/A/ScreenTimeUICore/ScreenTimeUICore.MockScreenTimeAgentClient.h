@class NSSet, _TtC14ScreenTimeCore12UserSettings, NSError, _TtC14ScreenTimeCore6UserID;

@interface ScreenTimeUICore.MockScreenTimeAgentClient : _TtCs12_SwiftObject <ScreenTimeCore.UserSettingsStoring, ScreenTimeCore.UserSettingsProviding>

- (void)deleteUserSettingsFor:(_TtC14ScreenTimeCore6UserID *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)insertWithUserSettings:(_TtC14ScreenTimeCore12UserSettings *)a0 for:(_TtC14ScreenTimeCore6UserID *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)updateWithUserSettings:(_TtC14ScreenTimeCore12UserSettings *)a0 for:(_TtC14ScreenTimeCore6UserID *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)userIdentifiersWithCompletionHandler:(void (^)(NSSet *, NSError *))a0;
- (void)userSettingsFor:(_TtC14ScreenTimeCore6UserID *)a0 completionHandler:(void (^)(_TtC14ScreenTimeCore12UserSettings *, NSError *))a1;

@end
