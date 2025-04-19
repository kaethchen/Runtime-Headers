@class NSArray, NSEnumerator, NSWindow;

@interface SFCertificateImportManager_ivars : NSObject {
    NSArray *_sfCertificates;
    NSEnumerator *_sfCertEnumerator;
    struct __SecPolicy { } *_sfPolicy;
    struct __SecKeychain { } *_sfDestKeychain;
    NSWindow *_sfParentWindow;
    BOOL _sfDetailsDisclosedBefore;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    BOOL _noSheetsAppeared;
}

- (void)dealloc;

@end
