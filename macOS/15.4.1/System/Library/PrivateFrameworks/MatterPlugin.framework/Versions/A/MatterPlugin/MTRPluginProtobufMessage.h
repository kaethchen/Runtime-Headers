@class MTRPluginPBMHeader, NSUUID, NSData, NSNumber;

@interface MTRPluginProtobufMessage : NSObject

@property (retain) NSData *messageData;
@property (retain) MTRPluginPBMHeader *messageHeader;
@property (copy) id /* block */ responseHandler;
@property (retain) id sourceAddress;
@property BOOL hintRequestCheckinMessageFromPeer;
@property (readonly) NSNumber *messageType;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSUUID *sessionIdentifier;
@property (readonly) NSUUID *homeIdentifier;
@property double responseTimeout;

+ (id)messageWithProtobufData:(id)a0;
+ (id)messageWithProtobufData:(id)a0 responseHandler:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0 responseHandler:(id /* block */)a1;
- (BOOL)isRequest;

@end
