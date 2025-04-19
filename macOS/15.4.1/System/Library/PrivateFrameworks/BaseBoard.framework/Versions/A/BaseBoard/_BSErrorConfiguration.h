@class NSString, NSMutableDictionary;

@interface _BSErrorConfiguration : NSObject <BSErrorConfiguring> {
    NSString *_domain;
    long long _code;
    NSMutableDictionary *_userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setCodeDescription:(id)a0;
- (void)setFailureDescription:(id)a0;
- (void)setFailureReason:(id)a0;
- (void)setUnderlyingError:(id)a0;
- (void)setUnderlyingErrors:(id)a0;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;

@end
