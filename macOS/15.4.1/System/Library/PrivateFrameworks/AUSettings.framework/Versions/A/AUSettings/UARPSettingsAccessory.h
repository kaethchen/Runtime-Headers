@class NSString, NSArray, NSDictionary;

@interface UARPSettingsAccessory : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_originalSettings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *hwFusing;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *activeVersion;
@property (readonly) NSArray *partnerSerialNumbers;
@property (readonly) BOOL otaDisabled;
@property (readonly) BOOL authListingEnabled;
@property (readonly) BOOL personalizationRequired;
@property (readonly) BOOL accessoryReachable;
@property (readonly) BOOL supportsDeveloperSettings;
@property (readonly) NSString *assetLocation;
@property (readonly) NSString *customTrain;
@property (readonly) NSString *customBuild;
@property (readonly) NSString *supplementalAssetLocation;
@property (readonly) NSString *supplementalCustomTrain;
@property (readonly) NSString *supplementalCustomBuild;
@property (readonly) NSString *downloadedVersion;
@property (readonly) NSString *dropboxVersion;
@property (readonly) NSString *assetURLOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setName:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setHwRevision:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setSupportsDeveloperSettings:(BOOL)a0;
- (void)setAssetLocation:(id)a0;
- (void)setCustomTrain:(id)a0;
- (void)setOtaDisabled:(BOOL)a0;
- (void)setCustomBuild:(id)a0;
- (id)encodeAsChangedDictionary;
- (id)encodeAsDictionary;
- (void)setAccessoryReachable:(BOOL)a0;
- (void)setActiveVersion:(id)a0;
- (void)setAssetURLOverride:(id)a0;
- (void)setAuthListingEnabled:(BOOL)a0;
- (void)setDownloadedVersion:(id)a0;
- (void)setDropboxVersion:(id)a0;
- (void)setHwFusing:(id)a0;
- (void)setPersonalizationRequired:(BOOL)a0;
- (void)setSupplementalAssetLocation:(id)a0;
- (void)setSupplementalCustomBuild:(id)a0;
- (void)setSupplementalCustomTrain:(id)a0;

@end
