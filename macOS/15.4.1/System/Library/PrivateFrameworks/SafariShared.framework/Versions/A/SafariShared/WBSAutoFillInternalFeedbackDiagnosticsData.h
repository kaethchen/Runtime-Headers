@class NSString, NSArray, NSURL, NSSet;

@interface WBSAutoFillInternalFeedbackDiagnosticsData : NSObject

@property (readonly, copy, nonatomic) NSString *creationDateString;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSArray *formMetadata;
@property (copy, nonatomic) NSSet *sensitiveValuesForRedaction;

- (id)init;
- (void).cxx_destruct;
- (id)writeTemporaryFileWithFormMetadata;

@end
