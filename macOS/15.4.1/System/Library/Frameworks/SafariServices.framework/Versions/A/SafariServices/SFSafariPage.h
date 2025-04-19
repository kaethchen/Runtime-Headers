@class NSUUID, SFSafariExtensionContext;

@interface SFSafariPage : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *_uuid;
@property (retain, nonatomic) SFSafariExtensionContext *_extensionContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reload;
- (id)_remoteObjectProxy;
- (id)_initWithUUID:(id)a0;
- (void)dispatchMessageToScriptWithName:(id)a0 userInfo:(id)a1;
- (void)getContainingTabWithCompletionHandler:(id /* block */)a0;
- (void)getIsActiveWithCompletionHandler:(id /* block */)a0;
- (void)getIsPrivateWithCompletionHandler:(id /* block */)a0;
- (void)getPagePropertiesWithCompletionHandler:(id /* block */)a0;
- (void)getScreenshotOfVisibleAreaWithCompletionHandler:(id /* block */)a0;
- (void)getTitleWithCompletionHandler:(id /* block */)a0;
- (void)getURLWithCompletionHandler:(id /* block */)a0;

@end
