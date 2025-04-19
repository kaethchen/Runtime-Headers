@class NSString, SKFilesystem, SKVolumeDescriptor;

@interface SKPartitionDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SKVolumeDescriptor *innerDescriptor;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) SKFilesystem *filesystem;
@property (readonly, nonatomic) unsigned long long size;

+ (id)descriptorWithVolume:(id)a0;
+ (id)descriptorWithVolume:(id)a0 size:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVolume:(id)a0 size:(unsigned long long)a1;

@end
