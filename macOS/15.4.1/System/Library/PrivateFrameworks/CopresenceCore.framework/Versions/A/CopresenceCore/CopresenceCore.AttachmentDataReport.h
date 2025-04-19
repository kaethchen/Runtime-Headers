@interface CopresenceCore.AttachmentDataReport : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isUpload;
    void /* unknown type, empty encoding */ assetTotalSize;
    void /* unknown type, empty encoding */ isServerBlocked;
    void /* unknown type, empty encoding */ isSubscribe;
    void /* unknown type, empty encoding */ responseTime;
    void /* unknown type, empty encoding */ endToEndAttachmentLatency;
    void /* unknown type, empty encoding */ loadTime;
    void /* unknown type, empty encoding */ totalAttachments;
    void /* unknown type, empty encoding */ totalDownloadBytes;
    void /* unknown type, empty encoding */ totalUploadBytes;
    void /* unknown type, empty encoding */ downloadSpeed;
    void /* unknown type, empty encoding */ uploadSpeed;
    void /* unknown type, empty encoding */ reportType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
