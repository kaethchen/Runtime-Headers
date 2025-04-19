@class NSString;

@interface IDSOffGridMessageContext : NSObject

@property (nonatomic) long long transportType;
@property (readonly, nonatomic) NSString *senderMergeID;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithIDSMessageContext:(id)a0;

@end
