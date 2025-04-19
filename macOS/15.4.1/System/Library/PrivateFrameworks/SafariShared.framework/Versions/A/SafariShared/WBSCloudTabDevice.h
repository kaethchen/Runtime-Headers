@class NSString, NSDictionary, NSArray, NSDate;

@interface WBSCloudTabDevice : NSObject <NSCopying, WBSCloudTabProvider>

@property (readonly, nonatomic) BOOL hasDuplicateName;
@property (readonly, nonatomic, getter=isEphemeralDevice) BOOL ephemeralDevice;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isCloudKitBookmarkSyncingSupported) BOOL cloudKitBookmarkSyncingSupported;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported;
@property (readonly, copy, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceNameInDictionary:(id)a0;
+ (BOOL)hasDuplicateDeviceNameInDictionary:(id)a0;
+ (BOOL)isCloudTabDeviceDictionary:(id)a0;
+ (BOOL)isEphemeralDeviceInDictionary:(id)a0;
+ (id)lastModifiedDateInDictionary:(id)a0;
+ (unsigned long long)tabCountInDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)deviceByRemovingTab:(id)a0;
- (id)deviceByRemovingTabs:(id)a0;
- (id)deviceBySettingDisambiguatedName:(id)a0;
- (id)initWithDeviceName:(id)a0 lastModified:(id)a1 hasDuplicateName:(BOOL)a2 tabs:(id)a3 uuid:(id)a4;
- (id)initWithDeviceName:(id)a0 lastModified:(id)a1 hasDuplicateName:(BOOL)a2 tabs:(id)a3 uuid:(id)a4 isEphemeralDevice:(BOOL)a5;
- (id)initWithDictionary:(id)a0 uuid:(id)a1;
- (id)initWithParameters:(id)a0 uuid:(id)a1;

@end
