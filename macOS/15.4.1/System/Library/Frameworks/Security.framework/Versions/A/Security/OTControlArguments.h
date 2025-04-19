@class NSString;

@interface OTControlArguments : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *contextID;
@property (retain) NSString *containerName;
@property (retain) NSString *altDSID;
@property (retain) NSString *flowID;
@property (retain) NSString *deviceSessionID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerName:(id)a0 contextID:(id)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4;
- (id)initWithAltDSID:(id)a0;
- (id)initWithAltDSID:(id)a0 flowID:(id)a1 deviceSessionID:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (id)initWithContainerName:(id)a0 contextID:(id)a1 altDSID:(id)a2;
- (id)makeConfigurationContext;

@end
