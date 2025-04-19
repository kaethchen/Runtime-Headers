@class NSString, NSDictionary;

@interface BMTopicEntity : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *topicId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *attributes;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithTopicId:(id)a0 displayName:(id)a1 attributes:(id)a2;

@end
