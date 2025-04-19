@class NSString, NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject

@property long long packageIndex;
@property (copy) NSURL *fileURL;
@property unsigned long long itemID;
@property (copy) NSData *signature;
@property long long size;
@property long long paddedSize;
@property long long offset;
@property int sectionIndex;
@property (copy) NSNumber *deviceID;
@property (copy) NSNumber *fileID;
@property (copy) NSNumber *generationID;
@property (copy) NSData *wrappedAssetKey;
@property (copy) NSString *itemTypeHint;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithDeviceID:(id)a0 fileID:(id)a1 generationID:(id)a2;

@end
