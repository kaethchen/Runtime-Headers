@class W5Peer, NSMutableDictionary;

@interface W5DiagnosticsModePeer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *info;
@property (retain, nonatomic) W5Peer *peer;
@property (nonatomic) long long role;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRole:(long long)a0 peer:(id)a1;
- (id)initWithRole:(long long)a0 peer:(id)a1 info:(id)a2;

@end
