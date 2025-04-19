@class ATAudioTapDescription;

@interface ATAudioTap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATAudioTapDescription *tapDescription;
@property (nonatomic, getter=isScreenSharingHost) BOOL screenSharingHost;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTapDescription:(id)a0;

@end
