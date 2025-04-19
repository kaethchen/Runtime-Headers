@interface AMPDeviceAutoFillPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL autoFillHigherRatedSongs;
@property (nonatomic) BOOL autoFillRandomSongs;
@property (nonatomic) BOOL autoFillReplaceSongs;
@property (nonatomic) unsigned long long autoFillSourcePlaylistID;
@property (nonatomic) unsigned long long autoFillReserveFreeBytes;
@property (nonatomic) unsigned long long autoFillTotalDiskBytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
