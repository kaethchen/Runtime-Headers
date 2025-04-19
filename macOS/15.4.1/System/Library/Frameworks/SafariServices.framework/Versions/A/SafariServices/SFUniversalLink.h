@class NSURL, LSAppLink;

@interface SFUniversalLink : NSObject {
    LSAppLink *_appLink;
}

@property (readonly) NSURL *webpageURL;
@property (readonly) NSURL *applicationURL;
@property (getter=isEnabled) BOOL enabled;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWebpageURL:(id)a0;

@end
