@class NSUUID;

@interface BCSBusinessQueryRequest : NSObject

@property (retain, nonatomic) NSUUID *requestId;
@property (copy, nonatomic) id /* block */ fetchEmailsPerItemBlock;
@property (copy, nonatomic) id /* block */ fetchEmailsCompletion;

- (void).cxx_destruct;

@end
