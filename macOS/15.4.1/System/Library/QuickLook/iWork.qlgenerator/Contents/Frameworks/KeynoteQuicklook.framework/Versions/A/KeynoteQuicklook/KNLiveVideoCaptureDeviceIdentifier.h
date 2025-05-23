@class NSString;

@interface KNLiveVideoCaptureDeviceIdentifier : TSCKSosBase <NSCopying> {
    long long _position;
    NSString *_deviceType;
}

@property (readonly, nonatomic) long long underlyingPosition;
@property (readonly, nonatomic) NSString *underlyingDeviceType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) BOOL isIOSScreenRecordingDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0 modelID:(id)a1 underlyingPosition:(long long)a2 underlyingDeviceType:(id)a3 localizedName:(id)a4 isIOSScreenRecordingDevice:(BOOL)a5;

@end
