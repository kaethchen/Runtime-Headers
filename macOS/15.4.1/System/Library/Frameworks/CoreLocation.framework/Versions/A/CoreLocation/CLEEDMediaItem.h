@class NSUUID, NSString, NSURL, NSData;

@interface CLEEDMediaItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long uploadStatus;
@property (retain, nonatomic) NSURL *stagingURL;
@property (retain, nonatomic) NSURL *encryptedFileURL;
@property (retain, nonatomic) NSData *authTag;
@property (retain, nonatomic) NSUUID *mediaItemID;
@property (retain, nonatomic) NSString *mediaItemFormat;
@property (nonatomic) unsigned long long mediaItemSizeBytes;
@property (nonatomic) unsigned long long originalSizeBytes;
@property (nonatomic) long long serverUploadStatus;
@property (nonatomic) unsigned long long uploadAttempts;
@property (nonatomic) long long durationCopyMs;
@property (nonatomic) long long durationTranscodeMs;
@property (nonatomic) long long durationEncryptionMs;
@property (nonatomic) long long durationUploadMs;
@property (nonatomic) BOOL metricProcessed;
@property (nonatomic) BOOL didApplyDelayMitigation;
@property (readonly, nonatomic) long long type;
@property (readonly, retain, nonatomic) NSURL *URL;
@property (readonly, retain, nonatomic) NSString *assetIdentifier;
@property (readonly, retain, nonatomic) NSString *sandboxExtension;

+ (id)createMediaItemFromDict:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createMediaItemDict;
- (id)initWithURL:(id)a0 assetIdentifier:(id)a1 sandboxExtension:(id)a2 mediaType:(long long)a3;
- (id)initWithURL:(id)a0 sandboxExtension:(id)a1 mediaType:(long long)a2;

@end
