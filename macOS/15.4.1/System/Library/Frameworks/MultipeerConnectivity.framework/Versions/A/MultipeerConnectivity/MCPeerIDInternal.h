@class NSString;

@interface MCPeerIDInternal : NSObject

@property (readonly) NSString *idString;
@property (readonly) unsigned long long pid64;
@property (readonly) NSString *displayName;

- (void)dealloc;
- (id)initWithIDString:(id)a0 pid64:(unsigned long long)a1 displayName:(id)a2;

@end
