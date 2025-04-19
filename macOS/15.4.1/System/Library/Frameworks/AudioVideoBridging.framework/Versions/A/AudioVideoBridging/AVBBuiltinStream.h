@interface AVBBuiltinStream : NSObject

@property unsigned short descriptorIndex;
@property BOOL connected;
@property long long streamingWaitCount;
@property long long streamingWaitPending;

@end
