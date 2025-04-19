@class NSData, NSString, MRPlayerPath, MRAVEndpoint, MRPlayer, _MRDestinationProtobuf, MRClient, MROrigin;

@interface MRDestination : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *outputDeviceUID;
@property (retain, nonatomic) MRAVEndpoint *endpoint;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRDestinationProtobuf *protobuf;
@property (readonly, nonatomic) NSString *outputContextUID;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isProactive;
@property (readonly, nonatomic) BOOL isUserSelected;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;

+ (id)localDestination;
+ (id)proactiveDestination;
+ (id)userSelectedDestination;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)_init;
- (id)initWithEndpoint:(id)a0;
- (id)initWithOrigin:(id)a0;
- (id)initWithOutputContextUID:(id)a0;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)populatePlayerPathIfNeeded;

@end
