@class NSArray, NSDictionary;

@interface W5PeerDiscoveryEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *peersFound;
@property (retain, nonatomic) NSArray *peersLost;
@property (retain, nonatomic) NSDictionary *info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPeersFound:(id)a0 peersLost:(id)a1 info:(id)a2;

@end
