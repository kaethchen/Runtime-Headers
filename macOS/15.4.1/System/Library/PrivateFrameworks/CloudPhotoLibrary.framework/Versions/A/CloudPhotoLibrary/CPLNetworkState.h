@class NSDictionary, NSObject;
@protocol OS_nw_path;

@interface CPLNetworkState : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_path> *networkPath;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic, getter=isCellular) BOOL cellular;
@property (readonly, nonatomic, getter=isCellularRestricted) BOOL cellularRestricted;
@property (readonly, nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;
@property (readonly, nonatomic) BOOL canUseNetwork;
@property (readonly, nonatomic) NSDictionary *plistDescription;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithNetworkPath:(id)a0 cellularRestricted:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (BOOL)isFunctionallyEqual:(id)a0;

@end
