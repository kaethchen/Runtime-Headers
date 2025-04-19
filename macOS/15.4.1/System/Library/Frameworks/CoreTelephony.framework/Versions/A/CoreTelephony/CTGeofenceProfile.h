@class NSString, NSArray;

@interface CTGeofenceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSString *csgNetworkIdentifier;
@property (retain, nonatomic) NSString *networkIdentifier;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
@property (nonatomic) BOOL enableNRStandalone;
@property (nonatomic) long long NRStandaloneMode;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
