@class NSString, AAPSyncAnchor, LSApplicationProxy, AAPSyncAppIdentifier;

@interface AAPSyncMetaDataItemUpdate : NSObject <AAPSyncMetaDataItem> {
    LSApplicationProxy *_appProxy;
}

@property (readonly, nonatomic) int appType;
@property (readonly, copy, nonatomic) AAPSyncAppIdentifier *identifier;
@property (readonly, copy, nonatomic) AAPSyncAnchor *anchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_validate;
- (id)_appIdentifyingInfoForProxy:(id)a0;
- (id)initWithIdentifier:(id)a0 appProxy:(id)a1 anchor:(id)a2 configuration:(id)a3;
- (BOOL)isMetaDataItemUpdate;
- (id)scrapeAppInfo;
- (id)valueForPlistEntry:(id)a0 inBundle:(struct __CFBundle { } *)a1 withInfo:(id)a2 entitlements:(id)a3;
- (id)valuesForEntries:(id)a0 inPlistAtURL:(id)a1;
- (id)valuesForInfoPlistEntries:(id)a0 inBundle:(struct __CFBundle { } *)a1 withEntitlements:(id)a2 forLocalization:(id)a3 ignoringDefaultValues:(id)a4;
- (id)valuesForLocalInfoPlistEntries:(id)a0 inBundle:(struct __CFBundle { } *)a1 withEntitlements:(id)a2 ignoringDefaultValues:(id)a3;

@end
