@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MRContentItem *item;
@property (retain, nonatomic) MRPlaybackQueueRequest *request;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0 request:(id)a1;

@end
