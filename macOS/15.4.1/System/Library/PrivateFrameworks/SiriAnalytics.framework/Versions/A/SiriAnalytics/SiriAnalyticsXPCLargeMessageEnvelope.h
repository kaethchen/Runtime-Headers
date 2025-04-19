@class NSString, NSUUID, NSData;

@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *largeMessagePath;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, copy, nonatomic) NSData *serializedDataUploadMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLargeMessagePath:(id)a0 requestIdentifier:(id)a1 serializedDataUploadMessage:(id)a2;

@end
