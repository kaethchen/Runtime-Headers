@class NSString;

@interface ACFKeychain : NSObject {
    NSString *_path;
}

@property (readonly) struct __SecKeychain { } *keychainRef;

+ (id)defaultKeychain;
+ (id)keychainWithPath:(id)a0;
+ (id)keychainWithRef:(struct __SecKeychain { } *)a0;

- (void)dealloc;
- (id)keychainPath;
- (id)initWithRef:(struct __SecKeychain { } *)a0;
- (struct __SecAccess { } *)createKeychainItemAccess:(const char *)a0 error:(struct __CFError **)a1;
- (id)passwordDataForService:(id)a0 account:(id)a1;
- (long long)cryptographicServiceProvider;
- (BOOL)deletePasswordDataForService:(id)a0 account:(id)a1;
- (BOOL)setPasswordData:(id)a0 forService:(id)a1 account:(id)a2;
- (BOOL)setPasswordData:(id)a0 forService:(id)a1 account:(id)a2 allowAppAccess:(BOOL)a3 userInteractionAllowed:(BOOL)a4;

@end
