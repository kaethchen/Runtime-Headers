@class NSObject;
@protocol OS_os_log;

@interface CalUILogSubsystem : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *defaultCategory;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *autocomplete;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *certificatePanel;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *customRecurrence;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *inspector;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *inspectorNewTimeProposal;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *inspectorUpdate;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *locations;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *notificationCenter;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *travel;

@end
