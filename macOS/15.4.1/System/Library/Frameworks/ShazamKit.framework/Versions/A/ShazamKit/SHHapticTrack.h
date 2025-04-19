@class NSString, NSFileManager, NSData, NSURL;

@interface SHHapticTrack : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSFileManager *fileManager;
@property (readonly, copy) NSString *fileIdentifier;
@property (readonly) NSData *hapticData;
@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSString *algorithm;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationURLForHapticFile;
- (id)hapticFileURL;
- (id)initWithFileIdentifier:(id)a0 hapticData:(id)a1 algorithm:(id)a2;

@end
