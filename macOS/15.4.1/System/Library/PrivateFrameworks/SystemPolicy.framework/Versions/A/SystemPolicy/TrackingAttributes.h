@interface TrackingAttributes : NSObject

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned short flags;

- (id)description;
- (id)initWithData:(id)a0;
- (id)redactedDescription;
- (id)serialize;

@end
