@class NSDate;

@interface MADBackgroundAnalysisProgressRecord : NSObject

@property (nonatomic) unsigned long long activityID;
@property (nonatomic) unsigned long long analysisSubtype;
@property (retain, nonatomic) NSDate *storeDate;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long processedAssetCount;
@property (nonatomic) unsigned long long totalAssetCount;
@property (nonatomic) unsigned long long progress;

- (id)description;
- (void).cxx_destruct;

@end
