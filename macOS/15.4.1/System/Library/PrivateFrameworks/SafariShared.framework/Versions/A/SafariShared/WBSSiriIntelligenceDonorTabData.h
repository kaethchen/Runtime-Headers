@class NSString, NSURL, NSDate;

@interface WBSSiriIntelligenceDonorTabData : NSObject

@property (copy, nonatomic) NSString *uuidString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *tabGroupUUID;

- (void).cxx_destruct;

@end
