@class INIntent;

@interface _VGOEMExtensionConnectionKey : NSObject {
    INIntent *_intent;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;

@end
