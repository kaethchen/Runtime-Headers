@class NSArray, NSDictionary;
@protocol UINSActivityItemsConfigurationReading;

@interface UINSShareSheetControllerConfiguration : NSObject

@property (copy, nonatomic) id /* block */ completionWithItemsHandler;
@property (copy, nonatomic) id /* block */ activitySelectedHandler;
@property (retain, nonatomic) id<UINSActivityItemsConfigurationReading> activityItemsConfiguration;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (copy, nonatomic) NSDictionary *shareKitInfo;
@property (nonatomic) unsigned long long collaborationMode;

- (void).cxx_destruct;

@end
