@class NSString, WBSSiriIntelligenceDonorPersonalizationData, NSURL, NSDate;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject

@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) NSString *userVisibleURLString;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *fullPageText;
@property (copy, nonatomic) NSString *readerText;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (retain, nonatomic) WBSSiriIntelligenceDonorPersonalizationData *personalizationData;
@property (copy, nonatomic) NSString *profileIdentifier;

- (void).cxx_destruct;

@end
