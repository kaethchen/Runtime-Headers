@interface SCRNotificationCenterOpaqueElementProviderGroup : SCROpaqueElementProviderGroup {
    struct { unsigned char isNotificationList : 2; unsigned char isWidgetGrid : 2; } _srncFlags;
}

@property (readonly, nonatomic) BOOL isNotificationList;
@property (readonly, nonatomic) BOOL isWidgetGrid;

- (id)statusDescription;
- (BOOL)allowFocusThroughSingleChild;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (long long)groupBehavior;
- (BOOL)handleLayoutChangeWithInfo:(id)a0;
- (id)titleDescription;

@end
