@class NSData;

@interface SESEndPointContainerInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *appletAID;
@property (readonly) BOOL isSuspended;

+ (id)withAppletAID:(id)a0 isSuspended:(BOOL)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
