@class NSError, BYRequest, NSMutableArray;

@interface BYOperationController : NSObject

@property (retain) BYRequest *request;
@property (retain) NSMutableArray *operations;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (unsigned int)_createPowerAssertion;
- (void)_addOperation:(id)a0;
- (void)_releasePowerAssertion:(unsigned int)a0;
- (void)_runOperationsWithDescription:(id)a0;
- (id)_stringForSecurityMode:(unsigned int)a0;
- (id)makeVolumeBootable;
- (id)prepareVolumeForMediumSecuritySoftwareUpdate;

@end
