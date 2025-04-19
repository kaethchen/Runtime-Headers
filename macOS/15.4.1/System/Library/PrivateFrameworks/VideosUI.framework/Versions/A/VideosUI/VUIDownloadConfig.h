@class NSArray;

@interface VUIDownloadConfig : NSObject

@property (retain, nonatomic) NSArray *blacklistedEarlyRenewalBrands;
@property (nonatomic) BOOL allowEnhancedDownloads;

- (id)init;
- (void).cxx_destruct;

@end
