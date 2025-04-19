@class MCPeerID, NSString;

@interface AXSSInterDeviceSearchResult : NSObject

@property (retain, nonatomic) MCPeerID *peerID;
@property (copy, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *name;

+ (id)searchResultWithPeerID:(id)a0 deviceType:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPeerID:(id)a0 deviceType:(id)a1;

@end
