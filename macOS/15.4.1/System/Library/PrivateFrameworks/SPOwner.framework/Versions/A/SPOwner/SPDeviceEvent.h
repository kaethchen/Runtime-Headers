@class NSString, SPAttachmentInfo, NSDate;

@interface SPDeviceEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) SPAttachmentInfo *attachmentInfo;
@property (copy, nonatomic) NSString *serialNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(id)a0 source:(long long)a1 attachmentInfo:(id)a2 serialNumber:(id)a3;

@end
