@class NSString, NSNumber;

@interface IASGenmojiAnalyzerFailureReason : NSObject

@property (copy, nonatomic) NSString *failureReasonPayloadValue;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSNumber *errorCode;

- (id)description;
- (void).cxx_destruct;

@end
