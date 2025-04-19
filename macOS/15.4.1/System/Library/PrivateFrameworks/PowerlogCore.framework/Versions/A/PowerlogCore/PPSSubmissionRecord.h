@class NSDictionary, NSURL, NSString;

@interface PPSSubmissionRecord : NSObject

@property (retain) NSDictionary *contextDictionary;
@property (retain) NSURL *filePath;
@property (retain) NSString *fileType;
@property (retain) NSString *issueCategory;
@property (retain) NSString *issueDescription;
@property BOOL isExpedited;
@property (readonly) BOOL isValid;
@property (retain) NSString *recordType;
@property (retain) NSString *targetContainer;

- (id)description;
- (void).cxx_destruct;
- (void)cleanup;

@end
