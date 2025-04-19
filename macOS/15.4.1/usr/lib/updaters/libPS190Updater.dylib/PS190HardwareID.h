@class NSString, NSDictionary, NSData, NSNumber;

@interface PS190HardwareID : NSObject {
    NSString *_authlistFormattedECID;
}

@property (readonly) NSNumber *boardID;
@property (readonly) unsigned int certificateEpoch;
@property (readonly) unsigned int chipID;
@property (readonly) BOOL debugDisable;
@property (readonly) unsigned long long ecid;
@property (readonly) NSData *nonce;
@property (readonly) NSNumber *productionMode;
@property (readonly) BOOL realHDCPKeysPresent;
@property (readonly) NSNumber *securityDomain;
@property (readonly) BOOL securityMode;
@property (readonly) NSString *hardwareRevision;
@property (readonly) BOOL requiresPersonalization;
@property (readonly) BOOL needsOTPProgramming;
@property (readonly) NSDictionary *dictionary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBoardID:(id)a0 certficateEpoch:(unsigned int)a1 chipID:(unsigned int)a2 debugDisable:(BOOL)a3 ecid:(unsigned long long)a4 nonce:(id)a5 productionMode:(id)a6 realHDCPKeysPresent:(BOOL)a7 securityDomain:(id)a8 securityMode:(BOOL)a9 hardwareRevision:(id)a10;

@end
