@class NSString;
@protocol ButtonInTabSyncGroupDelegate;

@interface TabBarEmptyRegionPlaceholderButton : TabButton <ButtonInTabSyncGroup>

@property (weak, nonatomic) id<ButtonInTabSyncGroupDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
