@class NSString, NSDictionary, NSArray;

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    void *_reserved;
    long long _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *domain;
@property (readonly) long long code;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly) id recoveryAttempter;
@property (readonly, copy) NSString *helpAnchor;
@property (readonly, copy) NSArray *underlyingErrors;

+ (id)bs_errorWithDomain:(id)a0 code:(long long)a1 configuration:(id /* block */)a2;
+ (id)rbs_errorClientNotAuthorized;
+ (id)rbs_errorClientNotEntitled:(id)a0 permanent:(BOOL)a1;
+ (id)_SFL_BookmarkDataAndURLAreNULLError;
+ (id)_SFL_BookmarkResolvedToURLInTrashError;
+ (id)_SFL_CorruptArchiveErrorWithUnderlyingError:(id)a0;
+ (id)_SFL_UnimplementedError;
+ (id)_SFL_insertErrorWithUnderlyingError:(id)a0;
+ (id)_SFL_removeErrorWithUnderlyingError:(id)a0;
+ (id)_SFL_setPropertiesErrorWithUnderlyingError:(id)a0;
+ (id)_SFL_updateErrorWithUnderlyingError:(id)a0;
+ (id)errorWithMTLCaptureErrorCode:(long long)a0;
+ (id)errorWithIOReturn:(int)a0;
+ (id)_EX_errorWithCode:(long long)a0 description:(id)a1;
+ (id)_EX_errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)_EX_hostIsLackingRequiredEntitlementErrorWithHostPID:(int)a0 requiredEntitlements:(id)a1;
+ (id)_EX_parameterError;
+ (id)_EX_processExitedErrorWithName:(id)a0 pid:(int)a1;
+ (id)_EX_unimplementedError;
+ (void)_setFileNameLocalizationEnabled:(BOOL)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (id /* block */)userInfoValueProviderForDomain:(id)a0;
+ (id)_cocoaErrorWithCode:(long long)a0 path:(id)a1 url:(id)a2 underlying:(id)a3 variant:(id)a4 source:(id)a5 destination:(id)a6;
+ (id)_readCorruptErrorWithFormat:(id)a0;
+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(void /* function */ *)a0 forErrorKey:(id)a1 parameters:(const char *)a2;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)a0 inDomain:(id)a1;
+ (id)_web_errorWithDomain:(id)a0 code:(long long)a1 URL:(id)a2;
+ (id)_web_errorWithDomain:(id)a0 code:(long long)a1 failingURL:(id)a2;
+ (void)setUserInfoValueProviderForDomain:(id)a0 provider:(id /* block */)a1;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)rbs_isPermanentFailure;
- (id)initWithIOAccelError:(long long)a0;
- (BOOL)isBSServiceConnectionError;
- (id)augmentWithPrefix:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)redactedDescription;
- (id)_web_failingURL;
- (id)_callStackReturnAddresses;
- (id)_cocoaErrorString:(id)a0;
- (id)_cocoaErrorString:(id)a0 fromBundle:(id)a1 tableName:(id)a2;
- (id)_cocoaErrorStringWithKind:(id)a0;
- (id)_cocoaErrorStringWithKind:(id)a0 variant:(id)a1;
- (long long)_collectApplicableUserInfoFormatters:(struct **)a0 max:(long long)a1;
- (id)_formatCocoaErrorString:(id)a0 parameters:(const char *)a1 applicableFormatters:(struct **)a2 count:(long long)a3;
- (struct __CFString { } *)_retainedUserInfoCallBackForKey:(id)a0;
- (BOOL)_web_errorIsInDomain:(id)a0;
- (id)_web_initWithDomain:(id)a0 code:(long long)a1 failingURL:(id)a2;
- (id)_web_initWithDomain_nowarn:(id)a0 code:(long long)a1 URL:(id)a2;
- (id)_web_localizedDescription;
- (id)replacementObjectForPortCoder:(id)a0;

@end
