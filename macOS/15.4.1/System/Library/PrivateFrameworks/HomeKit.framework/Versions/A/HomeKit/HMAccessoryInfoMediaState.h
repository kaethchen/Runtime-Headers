@class NSString;

@interface HMAccessoryInfoMediaState : NSObject

@property (readonly, copy) NSString *mediaIdentifier;
@property (readonly) double volume;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)protoData;
- (id)initWithMediaIdentifier:(id)a0 volume:(double)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4;
- (id)initWithProtoData:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)protoPayload;

@end
