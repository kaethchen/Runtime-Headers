@class NSString;

@interface DownloadableVoice : SOVoiceObject

@property (readonly) unsigned long long byteSize;
@property (readonly, retain) NSString *variant;
@property (readonly, retain) NSString *version;
@property (readonly, retain) NSString *tagName;
@property (readonly) NSString *voiceIdentifierToMarkAsPurgeableAfterInstall;
@property (readonly) NSString *compactSizeBundleIdentifier;
@property (readonly) unsigned long long compactSizeByteSize;
@property (readonly) NSString *compactSizeTagName;
@property (readonly) NSString *compactSizeVersion;
@property BOOL downloadCompactSize;

- (void)dealloc;
- (id)displayedSize;
- (id)initWithVoiceID:(id)a0 properties:(id)a1;

@end
