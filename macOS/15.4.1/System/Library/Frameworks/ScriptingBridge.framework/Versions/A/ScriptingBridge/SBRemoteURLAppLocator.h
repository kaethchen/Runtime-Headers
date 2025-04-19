@class NSURL;

@interface SBRemoteURLAppLocator : SBAppLocator {
    NSURL *_url;
}

- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)path;
- (id)sdef;

@end
