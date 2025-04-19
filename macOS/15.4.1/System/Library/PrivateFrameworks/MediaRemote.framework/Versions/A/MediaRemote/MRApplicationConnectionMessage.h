@class MRApplicationConnectionMessageHeader, NSData, _MRApplicationConnectionMessageProtobuf;

@interface MRApplicationConnectionMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MRApplicationConnectionMessageHeader *header;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRApplicationConnectionMessageProtobuf *protobuf;
@property (readonly, nonatomic) NSData *underlyingMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncodedUnderlyingMessage:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;

@end
