@class AMSCB1PMediaAccount, AMSCB1PHTTPHeaderDictionary, AMSCB1PAnyBox, NSURL, AMSCB1PUTF8String;

@interface AMSCB1PEncodeHTTPRequestOptions : NSObject {
    struct shared_ptr<AMSCore::IBag> { struct IBag *__ptr_; struct __shared_weak_count *__cntrl_; } _bag;
    struct shared_ptr<const AMSCore::IBundleInfo> { struct IBundleInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _bundleInfo;
    BOOL _shouldAlwaysAddCacheBuster;
    BOOL _shouldAlwaysSendDeviceGUID;
    AMSCB1PMediaAccount *_account;
    unsigned long long _anisetteType;
    AMSCB1PAnyBox *_body;
    unsigned long long _bodyEncoding;
    AMSCB1PUTF8String *_cachePolicyHeader;
    AMSCB1PHTTPHeaderDictionary *_headers;
    unsigned long long _mescalType;
    unsigned long long _method;
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithURL:(id)a0 account:(id)a1 shouldAlwaysAddCacheBuster:(BOOL)a2 anisetteType:(unsigned long long)a3 body:(id)a4 bodyEncoding:(unsigned long long)a5 cachePolicyHeader:(id)a6 headers:(id)a7 mescalType:(unsigned long long)a8 method:(unsigned long long)a9 shouldAlwaysSendDeviceGUID:(BOOL)a10 bag:(id)a11 bundleInfo:(id)a12;
- (id)initWithURL:(id)a0 parentBridge:(id)a1;

@end
