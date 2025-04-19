@class NSString;
@protocol UINSActivityItemsConfigurationReading;

@interface UINSTouchBarSharingDelegate : NSObject <NSSharingServicePickerTouchBarItemDelegate>

@property (retain, nonatomic) id<UINSActivityItemsConfigurationReading> activityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
