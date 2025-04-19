@class NSString;

@interface NSPrefPaneAnchor : NSObject {
    NSString *mAnchorString;
    NSString *mPPIdentifier;
}

+ (id)anchorWithString:(id)a0 prefPaneIdentifier:(id)a1;

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)reveal:(id)a0;
- (id)initWithAnchor:(id)a0 prefPaneIdentifier:(id)a1;

@end
