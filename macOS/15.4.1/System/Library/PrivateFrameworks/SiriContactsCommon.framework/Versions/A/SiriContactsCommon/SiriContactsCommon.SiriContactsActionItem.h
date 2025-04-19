@class NSString;

@interface SiriContactsCommon.SiriContactsActionItem : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ displayHandle;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ sanitizedHandle;
    void /* unknown type, empty encoding */ shouldGroupByBundleIdentifier;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ id;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
