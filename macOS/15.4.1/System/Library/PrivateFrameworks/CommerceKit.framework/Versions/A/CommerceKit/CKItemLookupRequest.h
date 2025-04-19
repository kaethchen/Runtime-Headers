@class NSString, NSArray;

@interface CKItemLookupRequest : NSObject {
    NSArray *_bundleIdentifiers;
    NSArray *_adamIdentifiers;
    NSString *_keyProfile;
    id /* block */ _lookupCallbackBlock;
}

@property (retain, nonatomic) NSString *preferredLanguage;
@property BOOL platformOverride;

- (void).cxx_destruct;
- (BOOL)start;
- (id)parameters;
- (id)initWithBundleIdentifiers:(id)a0 adamIDs:(id)a1 keyProfile:(id)a2;
- (BOOL)startWithLookupBlock:(id /* block */)a0;

@end
