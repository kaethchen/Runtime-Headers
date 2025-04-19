@class NSString, HUComfortSoundsShuffler, NSURL, AXAsset;

@interface HUComfortSound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *path;
@property (nonatomic) unsigned long long soundGroup;
@property (retain, nonatomic) AXAsset *asset;
@property (retain, nonatomic) HUComfortSoundsShuffler *fileShuffler;

+ (id)comfortSoundWithAsset:(id)a0;
+ (id)defaultComfortSoundForGroup:(unsigned long long)a0;
+ (id)soundWithName:(id)a0 path:(id)a1 andGroup:(unsigned long long)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedName;
- (id)nextFilePath;

@end
