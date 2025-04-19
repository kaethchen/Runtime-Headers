@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest

@property (readonly, nonatomic) STMediaChannel *channel;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithChannel:(id)a0;

@end
