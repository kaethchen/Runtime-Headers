@class NSString, NSArray, NSData, NSObject;
@protocol OS_os_log;

@interface PS190FirmwareFile : NSObject {
    NSObject<OS_os_log> *_log;
    NSData *_personalizedBundleData;
}

@property (readonly) struct PS190RawAppFirmwareVersion { unsigned char majorField; unsigned char minor; unsigned char sub; } version;
@property (readonly) NSString *versionString;
@property (readonly) NSData *bundleData;
@property (readonly) NSArray *blocks;
@property (readonly) const char *img4Object;
@property (readonly) unsigned int imemSize;
@property (readonly) unsigned int dmemSize;
@property (readonly) const char *imemImage;
@property (readonly) const char *dmemImage;
@property (readonly) unsigned char checksum;
@property (readonly) NSString *dumpString;
@property (readonly) NSString *dumpBlocksString;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithFile:(id)a0;
- (void)clearIMG4Data;
- (unsigned int)crc32ForBlocksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)generateDigest;
- (void)initBlocks;
- (BOOL)parseBundle;
- (void)setEmptyIMG4Data;
- (BOOL)setIMG4Data:(id)a0;

@end
