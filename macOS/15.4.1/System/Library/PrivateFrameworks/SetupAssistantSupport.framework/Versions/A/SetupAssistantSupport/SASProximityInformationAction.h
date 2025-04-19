@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
