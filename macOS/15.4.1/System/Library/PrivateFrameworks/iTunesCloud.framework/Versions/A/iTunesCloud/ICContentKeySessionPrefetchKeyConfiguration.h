@class NSSet, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ICContentKeySessionPrefetchKeyConfiguration : NSObject {
    BOOL _initWithDefaultKeyIdentifiers;
    NSSet *_keyIdentifiers;
    NSURL *_keyServerURL;
    NSURL *_keyCertificateURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _timeout;
}

@property (readonly, copy, nonatomic) NSSet *keyIdentifiers;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (void)_fetchWithRequestContext:(id)a0;

@end
