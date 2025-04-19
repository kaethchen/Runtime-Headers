@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)jsonDict;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;

@end
