@class NSString, NSArray, CSFAudioRecordDeviceInfo;

@interface CSFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CSFAudioRecordDeviceInfo *recordDeviceInfo;
@property (readonly, copy, nonatomic) NSString *playbackRoute;
@property (readonly, copy, nonatomic) NSArray *playbackDeviceTypeList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)initWithRecordDeviceInfo:(id)a0 playbackRoute:(id)a1 playbackDeviceTypeList:(id)a2;
- (id)xpcObject;

@end
