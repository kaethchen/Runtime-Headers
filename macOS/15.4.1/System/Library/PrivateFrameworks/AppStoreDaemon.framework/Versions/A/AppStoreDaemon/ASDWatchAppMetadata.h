@class NSString, NSNumber;

@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL skipIfInstalled;
@property (copy) NSString *altDSID;
@property (copy) NSString *appleID;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *downloaderID;
@property (copy) NSNumber *externalVersionID;
@property (copy) NSNumber *itemID;
@property (copy) NSNumber *previousExternalVersionID;
@property (copy) NSString *previousVariantID;
@property (copy) NSNumber *purchaserID;
@property (copy) NSString *redownloadParams;
@property (getter=isUserInitiated) BOOL userInitiated;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
