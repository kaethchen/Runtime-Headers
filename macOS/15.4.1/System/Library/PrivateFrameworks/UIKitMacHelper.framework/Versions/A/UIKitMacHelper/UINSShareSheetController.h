@class NSSharingService, NSArray, NSDictionary, NSString, NSSharingServicePicker;
@protocol UINSWindow, UINSActivityItemsConfigurationReading;

@interface UINSShareSheetController : NSObject <UINSShareSheetController, NSSharingServicePickerDelegate, NSSharingServiceDelegate, NSSharingServicePickerToolbarItemDelegate>

@property (retain, nonatomic) NSArray *nsApplicationActivities;
@property (retain, nonatomic) NSSharingServicePicker *sharingServicePicker;
@property (retain, nonatomic) NSSharingService *selectedSharingService;
@property (nonatomic) unsigned long long collaborationMode;
@property (weak, nonatomic) id<UINSWindow> windowProxy;
@property (nonatomic, getter=isPresented) BOOL presented;
@property (retain, nonatomic) id<UINSActivityItemsConfigurationReading> activityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationServices;
@property (copy, nonatomic) id /* block */ completionWithItemsHandler;
@property (copy, nonatomic) id /* block */ activitySelectedHandler;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) long long sharingStyle;
@property (copy, nonatomic) NSDictionary *shareKitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedShareSheetController;

- (void).cxx_destruct;
- (void)dismiss;
- (id)itemsForSharingServicePickerToolbarItem:(id)a0;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (void)_finishSessionWithSuccess:(BOOL)a0 sharingService:(id)a1 shareItems:(id)a2 error:(id)a3;
- (void)_presentWithItems:(id)a0 nsView:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)activityItemsConfigurationFromPickerToolbarItem:(id)a0;
- (void)presentFromSharingServicePickerToolbarItem:(id)a0 activityItemsConfiguration:(id)a1;
- (void)presentShareSheetWithItems:(id)a0 atUIWindowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)presentWithConfiguration:(id)a0 nsView:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentWithConfiguration:(id)a0 uiWindow:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
