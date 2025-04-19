@class NSURL, BDSSharedDataFile;

@interface BDSBookWidgetReadingHistoryDataFile : NSObject

@property (class, readonly, nonatomic) NSURL *defaultDataURL;

@property (readonly, nonatomic) BDSSharedDataFile *dataFile;

+ (id)sharedInstance;

- (id)init;
- (id)load;
- (void).cxx_destruct;
- (void)save:(id)a0;

@end
