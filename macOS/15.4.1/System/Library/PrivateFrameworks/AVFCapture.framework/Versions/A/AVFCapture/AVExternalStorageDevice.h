@class NSString, NSUUID;

@interface AVExternalStorageDevice : NSObject {
    struct __CFString { } *_figExternalStorageDeviceUUID;
    struct __CFArray { } *_nextAvailableURLArray;
    struct __CFString { } *_displayName;
    struct __CFURL { } *_baseURL;
    struct __CFString { } *_uniqueIdentifier;
}

@property (class, readonly) long long authorizationStatus;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long freeSize;
@property (readonly, nonatomic) long long totalSize;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic, getter=isNotRecommendedForCaptureUse) BOOL notRecommendedForCaptureUse;

+ (void)requestAccessWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)baseURL;
- (id)_uniqueIdentifier;
- (id)figExternalStorageDeviceUUID;
- (id)nextAvailableURLsWithPathExtensions:(id)a0 error:(id *)a1;

@end
