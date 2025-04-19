@class NSDictionary;

@interface CTXPCFirmwareUpdateInfoResponse : CTXPCResponseMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *firmwareInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFimwareUpdateInfo:(id)a0;

@end
