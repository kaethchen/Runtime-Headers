@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (id)assetData;
- (id)descriptionWithItem:(BOOL)a0;
- (id)initWithRecords:(id)a0;

@end
