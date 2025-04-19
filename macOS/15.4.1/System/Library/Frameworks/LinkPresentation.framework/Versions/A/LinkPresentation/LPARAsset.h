@class NSURL, LPARAssetProperties;

@interface LPARAsset : LPVisualMedia <NSSecureCoding> {
    NSURL *_temporaryFileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LPARAssetProperties *properties;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_createTemporaryFileAndWriteData;
- (id)_ensureTemporaryAssetURL;
- (id)_initWithARAsset:(id)a0;
- (BOOL)_isSubstitute;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;

@end
