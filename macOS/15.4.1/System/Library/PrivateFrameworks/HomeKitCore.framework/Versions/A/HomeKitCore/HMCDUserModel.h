@class NSUUID, NSString, HMCDHomeModel, HMCDUserSharedSettingsModel;

@interface HMCDUserModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, retain) HMCDHomeModel *home;
@property (nonatomic, retain) HMCDUserSharedSettingsModel *userSharedSettings;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
