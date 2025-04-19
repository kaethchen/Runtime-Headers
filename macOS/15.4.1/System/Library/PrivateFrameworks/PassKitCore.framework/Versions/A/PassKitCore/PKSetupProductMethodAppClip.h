@class NSURL;

@interface PKSetupProductMethodAppClip : PKSetupProductMethod

@property (readonly, copy, nonatomic) NSURL *appClipLaunchURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;

@end
