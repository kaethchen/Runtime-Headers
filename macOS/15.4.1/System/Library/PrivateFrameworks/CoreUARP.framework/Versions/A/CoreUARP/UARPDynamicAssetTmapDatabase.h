@class NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapDatabase : NSObject <NSSecureCoding> {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_tmapDatabase;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)addTmapMapping:(id)a0;
- (BOOL)cleanUpTmapDatabaseFiles;
- (BOOL)createTmapDatabaseFile;
- (BOOL)decomposeUARP;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1 appleModelNumber:(id)a2;
- (id)findTmapDatabaseFileUrl;
- (id)findTmapforAppleModel:(id)a0;
- (BOOL)flushToDisk;
- (id)initTmapDatabase:(id)a0;
- (BOOL)tmapDatabaseFileExists;

@end
