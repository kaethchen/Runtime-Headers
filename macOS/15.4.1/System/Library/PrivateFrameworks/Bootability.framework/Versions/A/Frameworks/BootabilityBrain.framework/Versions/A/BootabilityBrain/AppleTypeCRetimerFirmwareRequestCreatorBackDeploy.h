@class FTABSubfileBackDeploy, NSDictionary, NSData, FTABFileBackDeploy;

@interface AppleTypeCRetimerFirmwareRequestCreatorBackDeploy : AppleTypeCRetimerRestoreInfoHelperBackDeploy {
    FTABFileBackDeploy *_ftab;
    FTABSubfileBackDeploy *_rkos;
    FTABSubfileBackDeploy *_rrko;
    unsigned char _tagNumber;
    unsigned short _chipID;
    unsigned short _boardID;
    unsigned char _securityEpoch;
    unsigned char _productionStatus;
    unsigned char _securityMode;
    unsigned char _securityDomain;
    unsigned long long _ecid;
    NSData *_nonce;
    unsigned char _chipRev;
    BOOL _demote;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForSubfile:(id)a0;
- (void)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;

@end
