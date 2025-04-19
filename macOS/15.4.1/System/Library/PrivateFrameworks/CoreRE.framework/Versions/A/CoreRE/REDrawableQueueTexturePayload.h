@class REDrawableQueuePayload, RESharedResourcePayload;

@interface REDrawableQueueTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) REDrawableQueuePayload *drawableQueue;
@property (readonly, nonatomic) RESharedResourcePayload *placeholderTexture;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithDrawableQueue:(id)a0 placeholderTexture:(id)a1;

@end
