@class MRRequestDetails, _MRGroupTopologyModificationRequestProtobuf, NSArray, NSData, NSString;

@interface MRGroupTopologyModificationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRGroupTopologyModificationRequestProtobuf *protobuf;
@property (readonly, nonatomic) MRRequestDetails *requestDetails;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL fadeAudio;
@property (nonatomic) NSString *password;
@property (nonatomic) BOOL shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) BOOL suppressErrorDialog;
@property (nonatomic) BOOL muteUntilFinished;
@property (nonatomic) BOOL shouldModifyPredictedRoutes;
@property (nonatomic) BOOL shouldClearPredictedRoutes;

+ (BOOL)_initiatorShouldClearPredictedRoutesByDefault:(id)a0 forModificationType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)copyWithOutputDeviceUIDs:(id)a0;
- (id)copyWithType:(unsigned long long)a0 outputDeviceUIDs:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (id)initWithRequestDetails:(id)a0 type:(unsigned long long)a1 outputDeviceUIDs:(id)a2;
- (id)initWithRequestDetails:(id)a0 type:(unsigned long long)a1 outputDevices:(id)a2;

@end
