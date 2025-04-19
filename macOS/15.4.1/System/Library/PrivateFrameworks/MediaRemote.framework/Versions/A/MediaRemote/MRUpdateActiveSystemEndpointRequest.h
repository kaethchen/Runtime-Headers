@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic, getter=isPairedDeviceSync) BOOL pairedDeviceSync;
@property (nonatomic) long long type;
@property (nonatomic) BOOL demoteWhenSyncingToCompanion;
@property (nonatomic) BOOL suppressPairedDeviceSync;
@property (nonatomic) double disableDuration;
@property (readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *outputDeviceUID;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long changeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDeviceUID:(id)a0 reason:(id)a1;
- (id)initWithOutputDeviceUID:(id)a0 type:(long long)a1 reason:(id)a2;
- (id)initWithProtobuf:(id)a0;
- (void)perform:(id)a0 completion:(id /* block */)a1;

@end
