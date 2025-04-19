@class NSString;

@interface KCPairingChannelContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelClass;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *uniqueDeviceID;
@property (copy, nonatomic) NSString *uniqueClientID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (copy, nonatomic) NSString *intent;
@property (copy, nonatomic) NSString *capability;
@property (nonatomic) BOOL accountIsGuitarfish;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
