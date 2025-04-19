@class NSData;

@interface _RWITCPRelayMessage : NSObject {
    BOOL _writtenHeader;
    unsigned long long _writtenPayloadOffset;
}

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, copy, nonatomic) NSData *payload;

+ (id)TCPRelayMessageWithPayload:(id)a0;
+ (id)TCPRelayMessageFromDataStream:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (long long)write:(int)a0;
- (long long)writeInternal:(id /* block */)a0;
- (long long)writeMobileDevice:(struct _AMDServiceConnection { } *)a0;

@end
