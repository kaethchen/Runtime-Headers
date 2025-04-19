@class NSString;

@interface BMSocialMediaHandle : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *handle;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithBundleId:(id)a0 handle:(id)a1;
- (id)initWithProto:(id)a0;

@end
