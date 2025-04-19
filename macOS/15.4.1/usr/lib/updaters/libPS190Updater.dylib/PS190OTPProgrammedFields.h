@interface PS190OTPProgrammedFields : NSObject

@property (readonly) BOOL certificateEpoch;
@property (readonly) BOOL securityDomain;
@property (readonly) BOOL productionStatus;
@property (readonly) BOOL securityMode;
@property (readonly) BOOL debugDisable;
@property (readonly) BOOL realHDCPKeysPresent;
@property (readonly) BOOL boardID;
@property (readonly) BOOL ecid;

- (id)description;
- (id)initWithStatus1:(unsigned char)a0;

@end
