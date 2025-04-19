@class NSString, NSImage, NSArray;

@interface SGTMailStatus : NSObject {
    NSArray *names;
    NSString *imageName;
    NSImage *statusImage;
}

@property (readonly) NSString *displayName;
@property (readonly) NSString *menuName;
@property (readonly) NSImage *statusImage;
@property (readonly) NSString *spotlightAttribute;
@property (readonly) long long statusType;

- (void).cxx_destruct;
- (id)initWithStatusType:(long long)a0 names:(id)a1 menuName:(id)a2 imageName:(id)a3 spotlightAttribute:(id)a4;
- (BOOL)matchesInput:(id)a0;

@end
